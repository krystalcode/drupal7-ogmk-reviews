<?php
/**
 * @file
 * ogmk_reviews.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ogmk_reviews_field_group_info() {
  $field_groups = array();

  /**
   * @Issue(
   *   "Make field groups conditional depending on presence of the
   *   bootstrap_fieldgroup module"
   *   type="bug"
   *   priority="low"
   *   labels="modularity"
   * )
   */

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_r1c1r1c1|node|ogmk_review|form';
  $field_group->group_name = 'group_r1c1r1c1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ogmk_review';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_r1c1r1';
  $field_group->data = array(
    'label' => 'Row 1 Col 1 Row 1 Col 1',
    'weight' => '14',
    'children' => array(
      0 => 'title',
    ),
    'format_type' => 'bootstrap_grid_col',
    'format_settings' => array(
      'label' => 'Row 1 Col 1 Row 1 Col 1',
      'instance_settings' => array(
        'panelize' => '0',
        'bootstrap_grid_col_xs' => '12',
        'bootstrap_grid_col_sm' => '6',
        'bootstrap_grid_col_md' => '0',
        'bootstrap_grid_col_lg' => '0',
        'required_fields' => 1,
        'classes' => 'group-r1c1r1c1 field-group-bootstrap_grid_col',
      ),
    ),
  );
  $field_groups['group_r1c1r1c1|node|ogmk_review|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_r1c1r1c2|node|ogmk_review|form';
  $field_group->group_name = 'group_r1c1r1c2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ogmk_review';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_r1c1r1';
  $field_group->data = array(
    'label' => 'Row 1 Col 1 Row 1 Col 2',
    'weight' => '16',
    'children' => array(
      0 => 'ogmk_rating',
    ),
    'format_type' => 'bootstrap_grid_col',
    'format_settings' => array(
      'label' => 'Row 1 Col 1 Row 1 Col 2',
      'instance_settings' => array(
        'panelize' => '0',
        'bootstrap_grid_col_xs' => '12',
        'bootstrap_grid_col_sm' => '6',
        'bootstrap_grid_col_md' => '0',
        'bootstrap_grid_col_lg' => '0',
        'required_fields' => 1,
        'classes' => 'group-r1c1r1c2 field-group-bootstrap_grid_col',
      ),
    ),
  );
  $field_groups['group_r1c1r1c2|node|ogmk_review|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_r1c1r1|node|ogmk_review|form';
  $field_group->group_name = 'group_r1c1r1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ogmk_review';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_r1c1';
  $field_group->data = array(
    'label' => 'Row 1 Column 1 Row 1',
    'weight' => '13',
    'children' => array(
      0 => 'group_r1c1r1c1',
      1 => 'group_r1c1r1c2',
    ),
    'format_type' => 'bootstrap_grid_row',
    'format_settings' => array(
      'label' => 'Row 1 Column 1 Row 1',
      'instance_settings' => array(
        'show_heading' => '0',
        'heading_position' => '0',
        'label_element' => 'h3',
        'description_element' => 'p',
        'panelize' => '0',
        'bootstrap_grid_col_xs' => '0',
        'bootstrap_grid_col_sm' => '0',
        'bootstrap_grid_col_md' => '0',
        'bootstrap_grid_col_lg' => '0',
        'required_fields' => 1,
        'classes' => 'group-r1c1r1 field-group-bootstrap_grid_row',
        'description' => '',
      ),
    ),
  );
  $field_groups['group_r1c1r1|node|ogmk_review|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_r1c1r2c1|node|ogmk_review|form';
  $field_group->group_name = 'group_r1c1r2c1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ogmk_review';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_r1c1r2';
  $field_group->data = array(
    'label' => 'Row 1 Col 1 Row 2 Col 1',
    'weight' => '7',
    'children' => array(
      0 => 'ogmk_text_with_summary',
    ),
    'format_type' => 'bootstrap_grid_col',
    'format_settings' => array(
      'label' => 'Row 1 Col 1 Row 2 Col 1',
      'instance_settings' => array(
        'panelize' => '0',
        'bootstrap_grid_col_xs' => '12',
        'bootstrap_grid_col_sm' => '0',
        'bootstrap_grid_col_md' => '0',
        'bootstrap_grid_col_lg' => '0',
        'required_fields' => 1,
        'classes' => 'group-r1c1r2c1 field-group-bootstrap_grid_col',
      ),
    ),
  );
  $field_groups['group_r1c1r2c1|node|ogmk_review|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_r1c1r2|node|ogmk_review|form';
  $field_group->group_name = 'group_r1c1r2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ogmk_review';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_r1c1';
  $field_group->data = array(
    'label' => 'Row 1 Col 1 Row 2',
    'weight' => '14',
    'children' => array(
      0 => 'group_r1c1r2c1',
    ),
    'format_type' => 'bootstrap_grid_row',
    'format_settings' => array(
      'label' => 'Row 1 Col 1 Row 2',
      'instance_settings' => array(
        'show_heading' => '0',
        'heading_position' => '0',
        'label_element' => 'h3',
        'description_element' => 'p',
        'panelize' => '0',
        'bootstrap_grid_col_xs' => '12',
        'bootstrap_grid_col_sm' => '0',
        'bootstrap_grid_col_md' => '0',
        'bootstrap_grid_col_lg' => '0',
        'required_fields' => 1,
        'classes' => 'group-r1c1r2 field-group-bootstrap_grid_row',
        'description' => '',
      ),
    ),
  );
  $field_groups['group_r1c1r2|node|ogmk_review|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_r1c1|node|ogmk_review|form';
  $field_group->group_name = 'group_r1c1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ogmk_review';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_r1';
  $field_group->data = array(
    'label' => 'Col 1',
    'weight' => '9',
    'children' => array(
      0 => 'group_r1c1r1',
      1 => 'group_r1c1r2',
    ),
    'format_type' => 'bootstrap_grid_col',
    'format_settings' => array(
      'label' => 'Col 1',
      'instance_settings' => array(
        'panelize' => '1',
        'bootstrap_grid_col_xs' => '12',
        'bootstrap_grid_col_sm' => '9',
        'bootstrap_grid_col_md' => '0',
        'bootstrap_grid_col_lg' => '0',
        'required_fields' => 1,
        'classes' => 'group-r1c1 field-group-bootstrap_grid_col',
      ),
    ),
  );
  $field_groups['group_r1c1|node|ogmk_review|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_r1|node|ogmk_review|form';
  $field_group->group_name = 'group_r1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ogmk_review';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Review',
    'weight' => '0',
    'children' => array(
      0 => 'group_r1c1',
    ),
    'format_type' => 'bootstrap_grid_row',
    'format_settings' => array(
      'label' => 'Review',
      'instance_settings' => array(
        'show_heading' => '1',
        'heading_position' => '0',
        'label_element' => 'h3',
        'description_element' => 'p',
        'panelize' => '0',
        'bootstrap_grid_col_xs' => '12',
        'bootstrap_grid_col_sm' => '3',
        'bootstrap_grid_col_md' => '0',
        'bootstrap_grid_col_lg' => '0',
        'required_fields' => 1,
        'classes' => 'group-r1 field-group-bootstrap_grid_row',
        'description' => 'What did you like about the product? Did you find it as described? How did customer support do?',
      ),
    ),
  );
  $field_groups['group_r1|node|ogmk_review|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_r2c1|node|ogmk_review|form';
  $field_group->group_name = 'group_r2c1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ogmk_review';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_r2';
  $field_group->data = array(
    'label' => 'Row 2 Col 1',
    'weight' => '48',
    'children' => array(
      0 => 'ogmk_text_long',
    ),
    'format_type' => 'bootstrap_grid_col',
    'format_settings' => array(
      'label' => 'Row 2 Col 1',
      'instance_settings' => array(
        'panelize' => '1',
        'show_heading' => '0',
        'heading_position' => '0',
        'label_element' => 'h3',
        'description_element' => 'p',
        'panel_style' => 'default',
        'bootstrap_grid_col_xs' => '12',
        'bootstrap_grid_col_sm' => '9',
        'bootstrap_grid_col_md' => '0',
        'bootstrap_grid_col_lg' => '0',
        'required_fields' => 1,
        'classes' => 'group-r2c1 field-group-bootstrap_grid_col',
        'description' => '',
      ),
    ),
  );
  $field_groups['group_r2c1|node|ogmk_review|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_r2|node|ogmk_review|form';
  $field_group->group_name = 'group_r2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ogmk_review';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Private Feedback',
    'weight' => '1',
    'children' => array(
      0 => 'group_r2c1',
    ),
    'format_type' => 'bootstrap_grid_row',
    'format_settings' => array(
      'label' => 'Private Feedback',
      'instance_settings' => array(
        'show_heading' => '1',
        'heading_position' => '0',
        'label_element' => 'h3',
        'description_element' => 'p',
        'panelize' => '0',
        'panel_style' => 'default',
        'bootstrap_grid_col_xs' => '12',
        'bootstrap_grid_col_sm' => '3',
        'bootstrap_grid_col_md' => '0',
        'bootstrap_grid_col_lg' => '0',
        'required_fields' => 1,
        'classes' => 'group-r2 field-group-bootstrap_grid_row',
        'description' => 'You may optionally give us any feedback that you do not wish to be publicly displayed and that will not be shared with anyone outside of the Ya Market.',
      ),
    ),
  );
  $field_groups['group_r2|node|ogmk_review|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Col 1');
  t('Private Feedback');
  t('Review');
  t('Row 1 Col 1 Row 1 Col 1');
  t('Row 1 Col 1 Row 1 Col 2');
  t('Row 1 Col 1 Row 2');
  t('Row 1 Col 1 Row 2 Col 1');
  t('Row 1 Column 1 Row 1');
  t('Row 2 Col 1');

  return $field_groups;
}
