<?php
/**
 * @file
 * center_campo_bosted.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function center_campo_bosted_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}
