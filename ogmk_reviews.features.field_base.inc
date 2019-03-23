<?php

/**
 * @file
 * ogmk_reviews.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ogmk_reviews_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'ogmk_rating'.
  $field_bases['ogmk_rating'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'ogmk_rating',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'fivestar',
    'settings' => array(
      'axis' => 'vote',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'fivestar',
  );

  return $field_bases;
}
