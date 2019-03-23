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

  // Exported og permission: 'node:ogmk_shop:access authoring options of ogmk_review content'
  $permissions['node:ogmk_shop:access authoring options of ogmk_review content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_shop:access publishing options of ogmk_review content'
  $permissions['node:ogmk_shop:access publishing options of ogmk_review content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_shop:access revisions options of ogmk_review content'
  $permissions['node:ogmk_shop:access revisions options of ogmk_review content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_shop:create ogmk_review content'
  $permissions['node:ogmk_shop:create ogmk_review content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:ogmk_shop:delete any ogmk_review content'
  $permissions['node:ogmk_shop:delete any ogmk_review content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_shop:delete own ogmk_review content'
  $permissions['node:ogmk_shop:delete own ogmk_review content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_shop:update any ogmk_review content'
  $permissions['node:ogmk_shop:update any ogmk_review content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_shop:update own ogmk_review content'
  $permissions['node:ogmk_shop:update own ogmk_review content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:ogmk_shop:view any unpublished ogmk_review content'
  $permissions['node:ogmk_shop:view any unpublished ogmk_review content'] = array(
    'roles' => array(),
  );

  return $permissions;
}
