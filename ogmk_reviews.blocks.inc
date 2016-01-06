<?php
/**
 * @file
 * Blocks for the Commerce Marketplace Reviews feature.
 */

/**
 * Hooks.
 */

/**
 * Implements hook_block_info().
 */
function ogmk_reviews_block_info() {
  // Line Item block that shows on top of the Review node form.
  $blocks['review_form_line_item'] = array(
    'info' => t('OGMK Review: Review Form Line Item'),
    'cache' => DRUPAL_NO_CACHE,
  );

  return $blocks;
}

/**
 * Implements hook_block_view().
 */
function ogmk_reviews_block_view($delta = '') {
  $block = [];

  // Call block function, if defined.
  $function = '_ogmk_reviews_block_view__'.$delta;
  if (function_exists($function)) {
    $block = $function();
  }

  return $block;
}

/**
 * Functions for internal use.
 */

function _ogmk_reviews_block_view__review_form_line_item($delta = '') {
  // This block is meant to be displayed only on the "review" node add/edit
  // form. Get the menu item so that we can do some validation, and also get the
  // id of the line item associated with the Review.
  $menu_item = menu_get_item();

  // If we are on a node add form, the line item id must be present in the URL.
  if ($menu_item['path'] === 'node/add/review') {
    // We expect the "ogmk_line_item_ref" field to be prepopulated via the URL.
    // Something is wrong if this is not the case.
    if (empty($_GET['ogmk_line_item_ref'])) {
      return array();
    }

    $line_item_id = $_GET['ogmk_line_item_ref'];
  }
  // If we are on a node edit form, get the line item id from the node object.
  elseif ($menu_item['path'] === 'node/%/edit') {
    $node = $menu_item['map'][1];

    // Make sure we're on a "review" node edit form.
    if ($node->type !== 'review') {
      return array();
    }

    $node_wrapper = entity_metadata_wrapper('node', $node);
    $line_item    = $node_wrapper->ogmk_line_item_ref->value();
    $line_item_id = $line_item->line_item_id;
  }
  // Render nothing if we are not in a node add/edit form.
  else {
    return array();
  }

  // Load the line item and render it in the "ogmk_review" view mode.
  $line_item = commerce_line_item_load($line_item_id);
  $render_array = entity_view('commerce_line_item', array($line_item), 'ogmk_review', NULL, FALSE);

  return array(
    'subject' => '',
    'content' => $render_array,
  );
}
