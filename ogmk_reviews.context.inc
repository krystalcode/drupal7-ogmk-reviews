<?php

/**
 * @file
 * ogmk_reviews.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ogmk_reviews_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ogmk_review_form';
  $context->description = '';
  $context->tag = 'form';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'ogmk_review' => 'ogmk_review',
      ),
      'options' => array(
        'node_form' => '2',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ogmk_reviews-review_form_line_item' => array(
          'module' => 'ogmk_reviews',
          'delta' => 'review_form_line_item',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('form');
  $export['ogmk_review_form'] = $context;

  return $export;
}
