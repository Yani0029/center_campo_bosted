<?php
/**
 * @file
 * center_campo_bosted.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function center_campo_bosted_user_default_permissions() {
  $permissions = array();

  // Exported permission: create center content.
  $permissions['create center content'] = array(
    'name' => 'create center content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own center content.
  $permissions['delete own center content'] = array(
    'name' => 'delete own center content',
    'roles' => array(
      'Web redaktør' => 'Web redaktør',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own center content.
  $permissions['edit own center content'] = array(
    'name' => 'edit own center content',
    'roles' => array(
      'Web redaktør' => 'Web redaktør',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
