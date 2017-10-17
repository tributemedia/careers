<?php
/**
 * @file
 * careers.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function careers_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Submit Resume',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'landing_page',
  'language' => 'und',
  'created' => 1507717797,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '1a31fe84-2374-4fd0-94c3-2a418041daf3',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<h2>Join Our Team</h2>

<p>Cake sugar plum cake gingerbread icing. Donut tiramisu danish jujubes oat cake. Liquorice gingerbread sweet chocolate lemon drops.</p>

<p>Cake sugar plum cake gingerbread icing. Donut tiramisu danish jujubes oat cake. Liquorice gingerbread sweet chocolate lemon drops.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_form_stacked' => array(
    'und' => array(
      0 => array(
        'value' => 'side-by-side',
      ),
    ),
  ),
  'field_remove_navigation' => array(
    'und' => array(
      0 => array(
        'value' => 'navigation',
      ),
    ),
  ),
  'meta_canonical' => array(),
  'meta_copyright' => array(),
  'meta_description' => array(),
  'meta_keywords' => array(),
  'meta_robots' => array(
    'und' => array(
      0 => array(
        'metatags_quick' => '',
        'meta_name' => 'robots',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'webform' => array(
    'nid' => 5,
    'next_serial' => 2,
    'confirmation' => 'Thank you for applying to [site:name]! We’ll review your resume and contact you soon if we’re interested in scheduling an interview.
',
    'confirmation_format' => 'plain_text',
    'redirect_url' => '/thank-you-page',
    'status' => 1,
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'confidential' => 0,
    'submit_text' => '',
    'submit_limit' => 1,
    'submit_interval' => 3600,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => 'full_html',
    'preview_excluded_components' => array(),
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(
      1 => array(
        'nid' => 5,
        'eid' => 1,
        'email' => 3,
        'subject' => 'Thank you for applying to SmileTech!',
        'from_name' => 'default',
        'from_address' => 'default',
        'template' => 'Thank you for applying to [site:name]! We’ll review your resume and contact you soon if we’re interested in scheduling an interview.

For your reference, you submitted the following
[submission:values]',
        'excluded_components' => array(
          0 => 6,
        ),
        'html' => 0,
        'attachments' => 0,
        'exclude_empty' => 0,
        'extra' => FALSE,
        'status' => 1,
      ),
      2 => array(
        'nid' => 5,
        'eid' => 2,
        'email' => '[site:mail]',
        'subject' => 'You have a new careers submission from [site:name]',
        'from_name' => 1,
        'from_address' => 3,
        'template' => 'You have a new careers submission from [site:name]. Please review below.

Submitted on [submission:date:long]
Submitted by user: [submission:user]
Submitted values are:
[submission:values]

The results of this submission may be viewed at:
[site:login-url]?destination=[submission:url]',
        'excluded_components' => array(
          0 => 6,
        ),
        'html' => 0,
        'attachments' => 0,
        'exclude_empty' => 0,
        'extra' => FALSE,
        'status' => 1,
      ),
    ),
    'components' => array(
      1 => array(
        'nid' => 5,
        'cid' => 1,
        'pid' => 0,
        'form_key' => 'name',
        'name' => 'Name',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
          'minlength' => '',
        ),
        'required' => 1,
        'weight' => 0,
        'page_num' => 1,
      ),
      2 => array(
        'nid' => 5,
        'cid' => 2,
        'pid' => 0,
        'form_key' => 'phone',
        'name' => 'Phone',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
          'minlength' => '',
        ),
        'required' => 0,
        'weight' => 1,
        'page_num' => 1,
      ),
      3 => array(
        'nid' => 5,
        'cid' => 3,
        'pid' => 0,
        'form_key' => 'email',
        'name' => 'Email',
        'type' => 'email',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'multiple' => 0,
          'format' => 'short',
          'width' => '',
          'unique' => 0,
          'disabled' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 2,
        'page_num' => 1,
      ),
      4 => array(
        'nid' => 5,
        'cid' => 4,
        'pid' => 0,
        'form_key' => 'interested_position',
        'name' => 'Interested Position',
        'type' => 'textfield',
        'value' => '[current-page:query:position]',
        'extra' => array(
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
          'minlength' => '',
        ),
        'required' => 1,
        'weight' => 3,
        'page_num' => 1,
      ),
      5 => array(
        'nid' => 5,
        'cid' => 5,
        'pid' => 0,
        'form_key' => 'attach_resume',
        'name' => 'Attach Resume',
        'type' => 'file',
        'value' => '',
        'extra' => array(
          'scheme' => 'private',
          'directory' => 'resumes',
          'rename' => '[submission:values:name]-[submission:date]',
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'filtering' => array(
            'size' => '2 MB',
            'types' => array(
              0 => 'txt',
              1 => 'rtf',
              2 => 'pdf',
              3 => 'doc',
              4 => 'docx',
              5 => 'odt',
            ),
            'addextensions' => '',
          ),
          'progress_indicator' => 'throbber',
          'description' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 4,
        'page_num' => 1,
      ),
      6 => array(
        'nid' => 5,
        'cid' => 6,
        'pid' => 0,
        'form_key' => 'what_is_2__2',
        'name' => 'What is 2 + 2?',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => 'nosee',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
          'minlength' => '',
        ),
        'required' => 0,
        'weight' => 5,
        'page_num' => 1,
      ),
    ),
    'conditionals' => array(),
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2017-10-11 04:29:57 -0600',
  'user_uuid' => 'f49dd92a-e4ae-4086-a898-8de136e036cb',
);
  $nodes[] = array(
  'title' => 'Sample Position',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'career',
  'language' => 'und',
  'created' => 1508245306,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '72f0e5cd-88f8-4204-bc84-ecfeee3c40bf',
  'body' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2017-10-17 07:01:46 -0600',
  'user_uuid' => 'f49dd92a-e4ae-4086-a898-8de136e036cb',
);
  return $nodes;
}
