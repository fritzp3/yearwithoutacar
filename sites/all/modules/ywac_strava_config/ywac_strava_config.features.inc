<?php
/**
 * @file
 * ywac_strava_config.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ywac_strava_config_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_validation" && $api == "default_field_validation_rules") {
    return array("version" => "2");
  }
}

/**
 * Implements hook_views_api().
 */
function ywac_strava_config_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ywac_strava_config_node_info() {
  $items = array(
    'ywac_feed' => array(
      'name' => t('YWAC_Feed'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
