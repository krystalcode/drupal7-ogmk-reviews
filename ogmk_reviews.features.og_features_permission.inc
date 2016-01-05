<?php
/**
 * @file
 * ogmk_reviews.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function ogmk_reviews_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:shop:access authoring options of review content'
  $permissions['node:shop:access authoring options of review content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:shop:access publishing options of review content'
  $permissions['node:shop:access publishing options of review content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:shop:access revisions options of review content'
  $permissions['node:shop:access revisions options of review content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:shop:create review content'
  $permissions['node:shop:create review content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:shop:delete any review content'
  $permissions['node:shop:delete any review content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:shop:delete own review content'
  $permissions['node:shop:delete own review content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:shop:update any review content'
  $permissions['node:shop:update any review content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:shop:update own review content'
  $permissions['node:shop:update own review content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:shop:view any unpublished review content'
  $permissions['node:shop:view any unpublished review content'] = array(
    'roles' => array(),
  );

  return $permissions;
}
