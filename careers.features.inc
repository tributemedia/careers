<?php
/**
 * @file
 * careers.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function careers_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function careers_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function careers_node_info() {
  $items = array(
    'career' => array(
      'name' => t('Career'),
      'base' => 'node_content',
      'description' => t('If you post a job posting here, it will be listed, in alphabetical order, on the careers page. If you would like to un-list the job posting, you\'ll need to either delete or un-publish this content.'),
      'has_title' => '1',
      'title_label' => t('Posting Title'),
      'help' => t('If you post a job posting here, it will be listed, in alphabetical order, on the careers page. If you would like to un-list the job posting, you\'ll need to either delete or un-publish this content.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
