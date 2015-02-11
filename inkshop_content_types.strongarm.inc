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
  $strongarm->name = 'comment_anonymous_subscription';
  $strongarm->value = 0;
  $export['comment_anonymous_subscription'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_subscription';
  $strongarm->value = 1;
  $export['comment_default_mode_subscription'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_subscription';
  $strongarm->value = '50';
  $export['comment_default_per_page_subscription'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_subscription';
  $strongarm->value = 1;
  $export['comment_form_location_subscription'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_subscription';
  $strongarm->value = '1';
  $export['comment_preview_subscription'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_subscription';
  $strongarm->value = 1;
  $export['comment_subject_field_subscription'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subscription';
  $strongarm->value = '1';
  $export['comment_subscription'] = $strongarm;

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
          'weight' => '5',
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
  $strongarm->name = 'field_bundle_settings_node__subscription';
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
      'aehnliche_produkte' => array(
        'custom_settings' => FALSE,
      ),
      'flexslider_block' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
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
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'metatags' => array(
          'weight' => '40',
        ),
        'path' => array(
          'weight' => '30',
        ),
        'redirect' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(
        'product:sku' => array(
          'default' => array(
            'weight' => '21',
            'visible' => FALSE,
          ),
          'checkout_pane' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
        ),
        'product:title' => array(
          'default' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'checkout_pane' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
        ),
        'product:status' => array(
          'default' => array(
            'weight' => '22',
            'visible' => FALSE,
          ),
          'checkout_pane' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_price' => array(
          'default' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
          'checkout_pane' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
        ),
        'product:commerce_recurring_ini_price' => array(
          'default' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'checkout_pane' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
        'product:commerce_recurring_rec_price' => array(
          'default' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
          'checkout_pane' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
        'product:commerce_recurring_ini_period' => array(
          'default' => array(
            'weight' => '19',
            'visible' => FALSE,
          ),
          'checkout_pane' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
        ),
        'product:commerce_recurring_rec_period' => array(
          'default' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
          'checkout_pane' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
        ),
        'product:commerce_recurring_end_period' => array(
          'default' => array(
            'weight' => '20',
            'visible' => FALSE,
          ),
          'checkout_pane' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '6',
            'visible' => TRUE,
          ),
        ),
        'product:field_rec_description' => array(
          'default' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'checkout_pane' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
        ),
        'product:field_abogeschenk' => array(
          'default' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
          'checkout_pane' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '8',
            'visible' => TRUE,
          ),
        ),
        'product:field_physical_weight' => array(
          'default' => array(
            'weight' => '23',
            'visible' => FALSE,
          ),
          'checkout_pane' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
        ),
        'product:field_product_tax' => array(
          'checkout_pane' => array(
            'weight' => '44',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '24',
            'visible' => FALSE,
          ),
        ),
        'product:field_abogeschenk_taxo' => array(
          'default' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__subscription'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_product_display';
  $strongarm->value = '0';
  $export['language_content_type_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_subscription';
  $strongarm->value = '0';
  $export['language_content_type_subscription'] = $strongarm;

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
  $strongarm->name = 'menu_options_subscription';
  $strongarm->value = array();
  $export['menu_options_subscription'] = $strongarm;

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
  $strongarm->name = 'menu_parent_subscription';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_subscription'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_webform';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_webform'] = $strongarm;

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
  $strongarm->name = 'node_options_subscription';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_subscription'] = $strongarm;

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
  $strongarm->name = 'node_preview_subscription';
  $strongarm->value = '0';
  $export['node_preview_subscription'] = $strongarm;

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
  $strongarm->name = 'node_submitted_subscription';
  $strongarm->value = 0;
  $export['node_submitted_subscription'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_webform';
  $strongarm->value = 0;
  $export['node_submitted_webform'] = $strongarm;

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
