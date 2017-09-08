<?php
/**
 * @file
 * ywac_strava_config.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ywac_strava_config_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ywac_posts_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'YWAC Posts List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'YWAC Posts List';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Activity ID */
  $handler->display->display_options['fields']['field_activity_id']['id'] = 'field_activity_id';
  $handler->display->display_options['fields']['field_activity_id']['table'] = 'field_data_field_activity_id';
  $handler->display->display_options['fields']['field_activity_id']['field'] = 'field_activity_id';
  $handler->display->display_options['fields']['field_activity_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ywac_feed' => 'ywac_feed',
  );

  /* Display: Full List of Posts */
  $handler = $view->new_display('page', 'Full List of Posts', 'full');
  $handler->display->display_options['path'] = 'ywac-posts-list';

  /* Display: Short List of Posts */
  $handler = $view->new_display('page', 'Short List of Posts', 'short');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['path'] = 'ywac-posts-list-short';

  /* Display: Short List of Posts */
  $handler = $view->new_display('page', 'Short List of Posts', 'individual');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'YWAC Individual Post';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Activity ID (field_activity_id) */
  $handler->display->display_options['arguments']['field_activity_id_value']['id'] = 'field_activity_id_value';
  $handler->display->display_options['arguments']['field_activity_id_value']['table'] = 'field_data_field_activity_id';
  $handler->display->display_options['arguments']['field_activity_id_value']['field'] = 'field_activity_id_value';
  $handler->display->display_options['arguments']['field_activity_id_value']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_activity_id_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_activity_id_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_activity_id_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_activity_id_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'ywac-post';
  $export['ywac_posts_list'] = $view;

  return $export;
}
