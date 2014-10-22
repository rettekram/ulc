<?php
/**
 * @file
 * ulc_finalfeatures.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ulc_finalfeatures_user_default_roles() {
  $roles = array();

  // Exported role: Administration.
  $roles['Administration'] = array(
    'name' => 'Administration',
    'weight' => 4,
  );

  // Exported role: Pastor.
  $roles['Pastor'] = array(
    'name' => 'Pastor',
    'weight' => 3,
  );

  // Exported role: Site Architect.
  $roles['Site Architect'] = array(
    'name' => 'Site Architect',
    'weight' => 2,
  );

  return $roles;
}
