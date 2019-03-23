<?php

/**
 * @file
 * ogmk_reviews.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ogmk_reviews_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create ogmk_review content'.
  $permissions['create ogmk_review content'] = array(
    'name' => 'create ogmk_review content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any ogmk_review content'.
  $permissions['delete any ogmk_review content'] = array(
    'name' => 'delete any ogmk_review content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own ogmk_review content'.
  $permissions['delete own ogmk_review content'] = array(
    'name' => 'delete own ogmk_review content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any ogmk_review content'.
  $permissions['edit any ogmk_review content'] = array(
    'name' => 'edit any ogmk_review content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own ogmk_review content'.
  $permissions['edit own ogmk_review content'] = array(
    'name' => 'edit own ogmk_review content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'rate content'.
  $permissions['rate content'] = array(
    'name' => 'rate content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'fivestar',
  );

  return $permissions;
}
