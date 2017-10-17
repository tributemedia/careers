<?php
/**
 * @file
 * careers.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function careers_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-career-body'.
  $field_instances['node-career-body'] = array(
    'bundle' => 'career',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-landing_page-body'.
  $field_instances['node-landing_page-body'] = array(
    'bundle' => 'landing_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-landing_page-field_form_stacked'.
  $field_instances['node-landing_page-field_form_stacked'] = array(
    'bundle' => 'landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'side-by-side',
      ),
    ),
    'deleted' => 0,
    'description' => 'If you would like your form to appear to the right of the content area on your landing page, you can select side by side. The default is stacked so the form would be below the content area.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_form_stacked',
    'label' => 'Form Stacked or Side by Side',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-landing_page-field_remove_navigation'.
  $field_instances['node-landing_page-field_remove_navigation'] = array(
    'bundle' => 'landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'navigation',
      ),
    ),
    'deleted' => 0,
    'description' => 'Landing pages with the purpose of filling out the form should not have navigation and should direct to a meaningful thank you page. This setting will hide the header, hide the navigation bar and center the h1.title so it\'s a little more landing pageish.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_remove_navigation',
    'label' => 'Remove Navigation',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-landing_page-meta_canonical'.
  $field_instances['node-landing_page-meta_canonical'] = array(
    'bundle' => 'landing_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Canonical URLs are used from the search engines, and allow them to not report duplicate titles for HTML pages that are accessible from different URLs. Use an absolute path for your URL; canonical URLs that point to a different domain are normally not accepted.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'metatags_quick',
        'settings' => array(),
        'type' => 'metatags_quick_link',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'meta_canonical',
    'formatter' => 'metatags_quick_default',
    'label' => '(Meta)Canonical URL',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'metatags_quick',
      'settings' => array(),
      'type' => 'metatags_quick_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-landing_page-meta_copyright'.
  $field_instances['node-landing_page-meta_copyright'] = array(
    'bundle' => 'landing_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'metatags_quick',
        'settings' => array(),
        'type' => 'metatags_quick_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'meta_copyright',
    'formatter' => 'metatags_quick_default',
    'label' => '(Meta)Copyright',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'metatags_quick',
      'settings' => array(),
      'type' => 'metatags_quick_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-landing_page-meta_description'.
  $field_instances['node-landing_page-meta_description'] = array(
    'bundle' => 'landing_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'metatags_quick',
        'settings' => array(),
        'type' => 'metatags_quick_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'meta_description',
    'formatter' => 'metatags_quick_default',
    'label' => '(Meta)Description',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'metatags_quick',
      'settings' => array(),
      'type' => 'metatags_quick_textarea',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-landing_page-meta_keywords'.
  $field_instances['node-landing_page-meta_keywords'] = array(
    'bundle' => 'landing_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'metatags_quick',
        'settings' => array(),
        'type' => 'metatags_quick_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'meta_keywords',
    'formatter' => 'metatags_quick_default',
    'label' => '(Meta)Keywords',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'metatags_quick',
      'settings' => array(),
      'type' => 'metatags_quick_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-landing_page-meta_robots'.
  $field_instances['node-landing_page-meta_robots'] = array(
    'bundle' => 'landing_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'metatags_quick',
        'settings' => array(),
        'type' => 'metatags_quick_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'meta_robots',
    'formatter' => 'metatags_quick_default',
    'label' => '(Meta)Robots',
    'required' => FALSE,
    'settings' => array(
      'options' => 'noarchive,nofollow,noindex,noodp,nosnippet,noydir',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'metatags_quick',
      'settings' => array(),
      'type' => 'metatags_quick_checkboxes',
      'weight' => 6,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('(Meta)Canonical URL');
  t('(Meta)Copyright');
  t('(Meta)Description');
  t('(Meta)Keywords');
  t('(Meta)Robots');
  t('Body');
  t('Canonical URLs are used from the search engines, and allow them to not report duplicate titles for HTML pages that are accessible from different URLs. Use an absolute path for your URL; canonical URLs that point to a different domain are normally not accepted.');
  t('Form Stacked or Side by Side');
  t('If you would like your form to appear to the right of the content area on your landing page, you can select side by side. The default is stacked so the form would be below the content area.');
  t('Landing pages with the purpose of filling out the form should not have navigation and should direct to a meaningful thank you page. This setting will hide the header, hide the navigation bar and center the h1.title so it\'s a little more landing pageish.');
  t('Remove Navigation');

  return $field_instances;
}
