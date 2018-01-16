<?php
/**
 * @file
 * careers.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function careers_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_meta_description'.
  $field_bases['field_meta_description'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_meta_description',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'metatags_quick',
    'settings' => array(
      'max_length' => 250,
      'meta_name' => 'meta_description',
    ),
    'translatable' => 0,
    'type' => 'metatags_quick',
  );

  return $field_bases;
}
