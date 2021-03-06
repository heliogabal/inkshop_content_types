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
  $strongarm->name = 'chosen_disable_search_threshold';
  $strongarm->value = '0';
  $export['chosen_disable_search_threshold'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'chosen_minimum_multiple';
  $strongarm->value = '5';
  $export['chosen_minimum_multiple'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'chosen_minimum_single';
  $strongarm->value = '5';
  $export['chosen_minimum_single'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'chosen_minimum_width';
  $strongarm->value = '200';
  $export['chosen_minimum_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'chosen_no_results_text';
  $strongarm->value = 'Keine Ergebnisse';
  $export['chosen_no_results_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'chosen_placeholder_text_multiple';
  $strongarm->value = 'Optionen auswählen';
  $export['chosen_placeholder_text_multiple'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'chosen_placeholder_text_single';
  $strongarm->value = 'Option auswählen';
  $export['chosen_placeholder_text_single'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clean_url';
  $strongarm->value = 1;
  $export['clean_url'] = $strongarm;

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
  $strongarm->name = 'colorbox_load';
  $strongarm->value = TRUE;
  $export['colorbox_load'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_webform';
  $strongarm->value = '0';
  $export['comment_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_default_timezone';
  $strongarm->value = 'Europe/Berlin';
  $export['date_default_timezone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_first_day';
  $strongarm->value = '1';
  $export['date_first_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_short';
  $strongarm->value = 'd.m.Y - H:i';
  $export['date_format_short'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_ultrakurz';
  $strongarm->value = 'd.m.Y';
  $export['date_format_ultrakurz'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_page';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_product_display';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_webform';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_page';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_product_display';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_webform';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_page';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_product_display';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_webform';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__page';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__page'] = $strongarm;

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
      'suedlink' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '9',
        ),
        'path' => array(
          'weight' => '10',
        ),
        'redirect' => array(
          'weight' => '12',
        ),
      ),
      'display' => array(
        'product:sku' => array(
          'teaser' => array(
            'weight' => '28',
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
          'suedlink' => array(
            'weight' => '28',
            'visible' => FALSE,
          ),
        ),
        'product:title' => array(
          'teaser' => array(
            'weight' => '29',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '25',
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
          'suedlink' => array(
            'weight' => '29',
            'visible' => FALSE,
          ),
        ),
        'product:status' => array(
          'teaser' => array(
            'weight' => '31',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '26',
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
          'suedlink' => array(
            'weight' => '31',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_price' => array(
          'teaser' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '8',
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
          'suedlink' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_stock' => array(
          'teaser' => array(
            'weight' => '9',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '28',
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
          'suedlink' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
        ),
        'product:field_physical_weight' => array(
          'teaser' => array(
            'weight' => '32',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '27',
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
          'suedlink' => array(
            'weight' => '32',
            'visible' => FALSE,
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
          'suedlink' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
        'product:field_product_pdf' => array(
          'teaser' => array(
            'weight' => '4',
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
          'suedlink' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
        ),
        'product:field_product_subtitle' => array(
          'teaser' => array(
            'weight' => '2',
            'visible' => FALSE,
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
          'suedlink' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
        ),
        'product:field_product_tax' => array(
          'teaser' => array(
            'weight' => '6',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '9',
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
          'suedlink' => array(
            'weight' => '6',
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
          'suedlink' => array(
            'weight' => '23',
            'visible' => FALSE,
          ),
        ),
        'product:field_wholesale_price' => array(
          'teaser' => array(
            'weight' => '33',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '31',
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
          'suedlink' => array(
            'weight' => '33',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_stock_override' => array(
          'default' => array(
            'weight' => '32',
            'visible' => FALSE,
          ),
          'flexslider_block' => array(
            'weight' => '36',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '34',
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
          'suedlink' => array(
            'weight' => '34',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_license_type' => array(
          'teaser' => array(
            'weight' => '33',
            'visible' => FALSE,
          ),
          'suedlink' => array(
            'weight' => '33',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_license_duration' => array(
          'teaser' => array(
            'weight' => '34',
            'visible' => FALSE,
          ),
          'suedlink' => array(
            'weight' => '34',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_file' => array(
          'teaser' => array(
            'weight' => '35',
            'visible' => FALSE,
          ),
          'suedlink' => array(
            'weight' => '35',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_de_vat' => array(
          'default' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
          'suedlink' => array(
            'weight' => '4',
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
  $strongarm->name = 'field_bundle_settings_node__webform';
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
      'email_plain' => array(
        'custom_settings' => FALSE,
      ),
      'email_html' => array(
        'custom_settings' => FALSE,
      ),
      'email_textalt' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'aehnliche_produkte' => array(
        'custom_settings' => FALSE,
      ),
      'flexslider_block' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '6',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '5',
        ),
        'redirect' => array(
          'weight' => '4',
        ),
      ),
      'display' => array(
        'webform' => array(
          'default' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_compression_type';
  $strongarm->value = 'min';
  $export['jquery_update_compression_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_admin_version';
  $strongarm->value = '1.5';
  $export['jquery_update_jquery_admin_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_cdn';
  $strongarm->value = 'none';
  $export['jquery_update_jquery_cdn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_version';
  $strongarm->value = '1.8';
  $export['jquery_update_jquery_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_page';
  $strongarm->value = '0';
  $export['language_content_type_page'] = $strongarm;

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
  $strongarm->name = 'menu_options_page';
  $strongarm->value = array(
    0 => 'main-menu',
    1 => 'menu-pflichtmenu',
  );
  $export['menu_options_page'] = $strongarm;

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
  $strongarm->name = 'menu_parent_page';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_page'] = $strongarm;

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
  $strongarm->name = 'node_preview_page';
  $strongarm->value = '0';
  $export['node_preview_page'] = $strongarm;

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
  $strongarm->name = 'node_submitted_page';
  $strongarm->value = 0;
  $export['node_submitted_page'] = $strongarm;

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
  $strongarm->value = 'produkt/[node:field_pd_type]/[node:title]';
  $export['pathauto_node_product_display_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_webform_pattern';
  $strongarm->value = '';
  $export['pathauto_node_webform_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_abo_geschenk_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_abo_geschenk_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_buchhaltungs_kuerzel_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_buchhaltungs_kuerzel_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_category_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_category_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_kampagne_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_kampagne_pattern'] = $strongarm;

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

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_product_display';
  $strongarm->value = array(
    'status' => '1',
    'priority' => '1.0',
  );
  $export['xmlsitemap_settings_node_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_webform';
  $strongarm->value = array(
    'status' => '1',
    'priority' => '1.0',
  );
  $export['xmlsitemap_settings_node_webform'] = $strongarm;

  return $export;
}
