<?php
/**
 * @file
 * ywac_strava_config.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function ywac_strava_config_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Unique Strava Activity ID';
  $rule->name = 'unique_strava_activity_id';
  $rule->field_name = 'field_activity_id';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'ywac_feed';
  $rule->validator = 'field_validation_unique_validator';
  $rule->settings = array(
    'data' => 'global',
    'per_user' => 0,
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      3 => 0,
    ),
    'errors' => 0,
    'condition' => 0,
    'condition_wrapper' => array(
      'condition_field' => '',
      'condition_operator' => 'equals',
      'condition_value' => '',
    ),
  );
  $rule->error_message = 'Strava Activity ID must be unique.';
  $export['unique_strava_activity_id'] = $rule;

  return $export;
}
