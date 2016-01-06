<?php
/**
 * @file
 * ogmk_reviews.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ogmk_reviews_field_group_info() {
  $export = array();

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
  $field_group->identifier = 'group_r1c1r1c1|node|review|form';
  $field_group->group_name = 'group_r1c1r1c1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'review';
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
  $export['group_r1c1r1c1|node|review|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_r1c1r1c2|node|review|form';
  $field_group->group_name = 'group_r1c1r1c2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'review';
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
  $export['group_r1c1r1c2|node|review|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_r1c1r1|node|review|form';
  $field_group->group_name = 'group_r1c1r1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'review';
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
  $export['group_r1c1r1|node|review|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_r1c1r2c1|node|review|form';
  $field_group->group_name = 'group_r1c1r2c1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'review';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_r1c1r2';
  $field_group->data = array(
    'label' => 'Row 1 Col 1 Row 2 Col 1',
    'weight' => '7',
    'children' => array(
      0 => 'body',
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
  $export['group_r1c1r2c1|node|review|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_r1c1r2|node|review|form';
  $field_group->group_name = 'group_r1c1r2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'review';
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
  $export['group_r1c1r2|node|review|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_r1c1|node|review|form';
  $field_group->group_name = 'group_r1c1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'review';
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
  $export['group_r1c1|node|review|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_r1|node|review|form';
  $field_group->group_name = 'group_r1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'review';
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
  $export['group_r1|node|review|form'] = $field_group;

  return $export;
}
