<?php
/**
 * @file
 * inkshop_content_types.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function inkshop_content_types_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clientside_validation_default_settings';
  $strongarm->value = array(
    'validate_options' => array(
      'disable_html5' => 1,
      'captcha' => '1',
      'validate_onsubmit' => '1',
      'validate_onblur' => '1',
      'validate_onblur_always' => '1',
      'validate_onkeyup' => '1',
      'validate_before_ajax' => '0',
      'show_messages' => '0',
    ),
    'error' => array(
      'prefix' => '"',
      'suffix' => '"',
      'scrollto_errormessage' => 1,
      'scroll_speed' => '1000',
      'error_element' => 'label',
    ),
    'error_placement' => array(
      'error_placement_default' => '5',
      'jquery_selector' => '',
      'custom_error_function' => '',
    ),
    'include_hidden' => array(
      'include_hidden_fields' => 0,
      'validate_tabs' => 0,
      'include_hidden' => '',
    ),
  );
  $export['clientside_validation_default_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clientside_validation_filter_paths';
  $strongarm->value = '0';
  $export['clientside_validation_filter_paths'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clientside_validation_override_jquery_form';
  $strongarm->value = '0';
  $export['clientside_validation_override_jquery_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clientside_validation_path_list';
  $strongarm->value = 'admin/structure/views/*';
  $export['clientside_validation_path_list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clientside_validation_use_minified';
  $strongarm->value = '1';
  $export['clientside_validation_use_minified'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clientside_validation_validate_all';
  $strongarm->value = '1';
  $export['clientside_validation_validate_all'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clientside_validation_validate_specific';
  $strongarm->value = '';
  $export['clientside_validation_validate_specific'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_webform';
  $strongarm->value = '0';
  $export['comment_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__product_display';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'checkout_pane' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'colorbox' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'flexslider_block' => array(
        'custom_settings' => TRUE,
      ),
      'aehnliche_produkte' => array(
        'custom_settings' => TRUE,
      ),
      'email_plain' => array(
        'custom_settings' => FALSE,
      ),
      'email_html' => array(
        'custom_settings' => FALSE,
      ),
      'email_textalt' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '4',
        ),
        'path' => array(
          'weight' => '6',
        ),
        'redirect' => array(
          'weight' => '7',
        ),
      ),
      'display' => array(
        'product:sku' => array(
          'teaser' => array(
            'weight' => '26',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'flexslider_block' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'aehnliche_produkte' => array(
            'weight' => '21',
            'visible' => FALSE,
          ),
          'checkout_pane' => array(
            'weight' => '-10',
            'visible' => FALSE,
          ),
        ),
        'product:title' => array(
          'teaser' => array(
            'weight' => '27',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '24',
            'visible' => FALSE,
          ),
          'flexslider_block' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
          'aehnliche_produkte' => array(
            'weight' => '22',
            'visible' => FALSE,
          ),
          'checkout_pane' => array(
            'weight' => '-5',
            'visible' => FALSE,
          ),
        ),
        'product:status' => array(
          'teaser' => array(
            'weight' => '29',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '25',
            'visible' => FALSE,
          ),
          'flexslider_block' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
          'aehnliche_produkte' => array(
            'weight' => '23',
            'visible' => FALSE,
          ),
          'checkout_pane' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_price' => array(
          'teaser' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '9',
            'visible' => TRUE,
          ),
          'flexslider_block' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'aehnliche_produkte' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
          'checkout_pane' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
        ),
        'product:commerce_stock' => array(
          'teaser' => array(
            'weight' => '8',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '27',
            'visible' => FALSE,
          ),
          'flexslider_block' => array(
            'weight' => '20',
            'visible' => FALSE,
          ),
          'aehnliche_produkte' => array(
            'weight' => '25',
            'visible' => FALSE,
          ),
          'checkout_pane' => array(
            'weight' => '8',
            'visible' => TRUE,
          ),
        ),
        'product:field_physical_weight' => array(
          'teaser' => array(
            'weight' => '30',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '26',
            'visible' => FALSE,
          ),
          'flexslider_block' => array(
            'weight' => '19',
            'visible' => FALSE,
          ),
          'aehnliche_produkte' => array(
            'weight' => '24',
            'visible' => FALSE,
          ),
          'checkout_pane' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
        ),
        'product:field_product_image' => array(
          'teaser' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'flexslider_block' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'aehnliche_produkte' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'checkout_pane' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
        ),
        'product:field_product_pdf' => array(
          'teaser' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
          'flexslider_block' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'aehnliche_produkte' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'checkout_pane' => array(
            'weight' => '6',
            'visible' => TRUE,
          ),
        ),
        'product:field_product_subtitle' => array(
          'teaser' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'flexslider_block' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'aehnliche_produkte' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'checkout_pane' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
        ),
        'product:field_product_tax' => array(
          'teaser' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'flexslider_block' => array(
            'weight' => '22',
            'visible' => FALSE,
          ),
          'aehnliche_produkte' => array(
            'weight' => '26',
            'visible' => FALSE,
          ),
          'checkout_pane' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
        ),
        'product:field_product_weigth' => array(
          'teaser' => array(
            'weight' => '23',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
          'flexslider_block' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
          'aehnliche_produkte' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
        ),
        'product:field_wholesale_price' => array(
          'teaser' => array(
            'weight' => '31',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '30',
            'visible' => FALSE,
          ),
          'flexslider_block' => array(
            'weight' => '25',
            'visible' => FALSE,
          ),
          'aehnliche_produkte' => array(
            'weight' => '29',
            'visible' => FALSE,
          ),
          'checkout_pane' => array(
            'weight' => '11',
            'visible' => TRUE,
          ),
        ),
        'product:commerce_stock_override' => array(
          'default' => array(
            'weight' => '31',
            'visible' => FALSE,
          ),
          'flexslider_block' => array(
            'weight' => '36',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '32',
            'visible' => FALSE,
          ),
          'aehnliche_produkte' => array(
            'weight' => '30',
            'visible' => FALSE,
          ),
          'checkout_pane' => array(
            'weight' => '36',
            'visible' => TRUE,
          ),
        ),
        'product:commerce_license_type' => array(
          'teaser' => array(
            'weight' => '33',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_license_duration' => array(
          'teaser' => array(
            'weight' => '34',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_file' => array(
          'teaser' => array(
            'weight' => '35',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_product_display';
  $strongarm->value = '0';
  $export['language_content_type_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_webform';
  $strongarm->value = '0';
  $export['language_content_type_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_product_display';
  $strongarm->value = array();
  $export['menu_options_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_webform';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_product_display';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_webform';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_page';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_product_display';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_webform';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_product_display';
  $strongarm->value = '0';
  $export['node_preview_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_webform';
  $strongarm->value = '1';
  $export['node_preview_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_product_display';
  $strongarm->value = 0;
  $export['node_submitted_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_webform';
  $strongarm->value = 0;
  $export['node_submitted_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_file_audio_pattern';
  $strongarm->value = '';
  $export['pathauto_file_audio_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_file_document_pattern';
  $strongarm->value = '';
  $export['pathauto_file_document_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_file_image_pattern';
  $strongarm->value = '';
  $export['pathauto_file_image_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_file_pattern';
  $strongarm->value = 'files/[file:name]';
  $export['pathauto_file_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_file_video_pattern';
  $strongarm->value = '';
  $export['pathauto_file_video_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_ignore_words';
  $strongarm->value = 'a, an, as, at, before, but, by, for, from, is, in, into, like, of, off, on, onto, per, since, than, the, this, that, to, up, via, with';
  $export['pathauto_ignore_words'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_page_pattern';
  $strongarm->value = '';
  $export['pathauto_node_page_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pattern';
  $strongarm->value = '[node:title]';
  $export['pathauto_node_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_product_display_pattern';
  $strongarm->value = 'produkt/[node:field_pd_category]/[node:title]';
  $export['pathauto_node_product_display_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_category_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_category_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_taxonomy_term_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_tags_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_tags_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_type_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_type_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_transliterate';
  $strongarm->value = 1;
  $export['pathauto_transliterate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_user_pattern';
  $strongarm->value = 'users/[user:name]';
  $export['pathauto_user_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_blocks_global';
  $strongarm->value = array(
    0 => 'format',
  );
  $export['simplify_blocks_global'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_nodes_global';
  $strongarm->value = array(
    0 => 'format',
    1 => 'revision',
    2 => 'path',
    3 => 'metatag',
  );
  $export['simplify_nodes_global'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_taxonomy_global';
  $strongarm->value = array(
    0 => 'format',
    1 => 'path',
    2 => 'metatag',
    3 => 'redirect',
  );
  $export['simplify_taxonomy_global'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_users_global';
  $strongarm->value = array(
    0 => 'format',
    1 => 'metatag',
    2 => 'redirect',
  );
  $export['simplify_users_global'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webform_blocks';
  $strongarm->value = array(
    'client-block-1422' => array(
      'display' => 'form',
      'pages_block' => '1',
    ),
  );
  $export['webform_blocks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webform_node_webform';
  $strongarm->value = 1;
  $export['webform_node_webform'] = $strongarm;

  return $export;
}
