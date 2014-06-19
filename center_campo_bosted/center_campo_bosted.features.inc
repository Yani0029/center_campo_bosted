<?php
/**
 * @file
 * center_campo_bosted.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function center_campo_bosted_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function center_campo_bosted_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function center_campo_bosted_node_info() {
  $items = array(
    'center' => array(
      'name' => t('Botilbud'),
      'base' => 'node_content',
      'description' => t('Center-Campo botilbud'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
