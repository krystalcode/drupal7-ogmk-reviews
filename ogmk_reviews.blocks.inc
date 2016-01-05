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
  // We expect the "ogmk_line_item_ref" field to be prepopulated via the URL.
  // Something is wrong if this is not the case.
  if (empty($_GET['ogmk_line_item_ref'])) {
    return array();
  }

  // Load the line item and render it in the "ogmk_review" view mode.
  $line_item = commerce_line_item_load($_GET['ogmk_line_item_ref']);
  $render_array = entity_view('commerce_line_item', array($line_item), 'ogmk_review', NULL, FALSE);

  return array(
    'subject' => '',
    'content' => $render_array,
  );
}
