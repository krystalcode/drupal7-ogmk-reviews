<?php

/**
 * @file
 * ogmk_reviews.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ogmk_reviews_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_ogmk_review';
  $strongarm->value = 'edit-og';
  $export['additional_settings__active_tab_ogmk_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_ogmk_review';
  $strongarm->value = 0;
  $export['comment_anonymous_ogmk_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_ogmk_review';
  $strongarm->value = 1;
  $export['comment_default_mode_ogmk_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_ogmk_review';
  $strongarm->value = '50';
  $export['comment_default_per_page_ogmk_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_ogmk_review';
  $strongarm->value = 1;
  $export['comment_form_location_ogmk_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_ogmk_review';
  $strongarm->value = '1';
  $export['comment_ogmk_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_ogmk_review';
  $strongarm->value = '1';
  $export['comment_preview_ogmk_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_ogmk_review';
  $strongarm->value = 1;
  $export['comment_subject_field_ogmk_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_ogmk_review';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_ogmk_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_ogmk_review';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_ogmk_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_ogmk_review';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_ogmk_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__ogmk_review';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => TRUE,
      ),
      'ogmk_bootstrap_media' => array(
        'custom_settings' => TRUE,
      ),
      'ogmk_manage_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'info' => array(
        'custom_settings' => FALSE,
      ),
      'ogmk_bootstrap_media_simple' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '15',
        ),
        'path' => array(
          'weight' => '5',
        ),
        'metatags' => array(
          'weight' => '7',
        ),
        'xmlsitemap' => array(
          'weight' => '6',
        ),
      ),
      'display' => array(
        'sharethis' => array(
          'teaser' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'ogmk_bootstrap_media' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'rss' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
          'ogmk_bootstrap_media_simple' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__ogmk_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_ogmk_review';
  $strongarm->value = '0';
  $export['language_content_type_ogmk_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ogmk_review';
  $strongarm->value = array();
  $export['menu_options_ogmk_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ogmk_review';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ogmk_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ogmk_review';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_ogmk_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ogmk_review';
  $strongarm->value = '0';
  $export['node_preview_ogmk_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ogmk_review';
  $strongarm->value = 1;
  $export['node_submitted_ogmk_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ogmk_review_pattern';
  $strongarm->value = 'reviews/[node:nid]/[node:title]';
  $export['pathauto_node_ogmk_review_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_ogmk_review';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_ogmk_review'] = $strongarm;

  return $export;
}
