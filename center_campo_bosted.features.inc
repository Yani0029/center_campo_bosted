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
    'bostedlokale' => array(
      'name' => t('Afdelinger'),
      'base' => 'node_content',
      'description' => t('Botilbud Afdelinger'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'center' => array(
      'name' => t('Botilbud'),
      'base' => 'node_content',
      'description' => t('Center-Campo botilbud'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'medarbejde' => array(
      'name' => t('Medarbejde'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'organisationsside' => array(
      'name' => t('Organisationsside'),
      'base' => 'node_content',
      'description' => t('Center Campo organisationsside.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Afdelinger underside'),
      'base' => 'node_content',
      'description' => t('Afdelinger undersider  node-type: page
Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'reports' => array(
      'name' => t('Beretninger'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'underside' => array(
      'name' => t('Campo Underside'),
      'base' => 'node_content',
      'description' => t('Alm. undersider i Campo'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'video' => array(
      'name' => t('Video'),
      'base' => 'node_content',
      'description' => t('Video types'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
