<?php
/**
 * @file
 * inkshop_content_types.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function inkshop_content_types_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|product_display|aehnliche_produkte';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'product_display';
  $ds_fieldsetting->view_mode = 'aehnliche_produkte';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(),
      ),
    ),
  );
  $export['node|product_display|aehnliche_produkte'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|product_display|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'product_display';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'link_zzgl_versandkosten' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'new_field' => array(
      'weight' => '12',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
    'field_commerce_product' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_pd_category' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'field_pd_type' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'field_tags' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|product_display|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|product_display|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'product_display';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'link_zzgl_versandkosten' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'new_field' => array(
      'weight' => '12',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title_field' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
    'field_pd_untertitel_liste' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'field-name-field-product-subtitle',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['node|product_display|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function inkshop_content_types_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'download_popup';
  $ds_field->label = 'Download Popup';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'product_display|*';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['download_popup'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'link_zzgl_versandkosten';
  $ds_field->label = 'zzgl. Versandkosten';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
    'commerce_product' => 'commerce_product',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<p>inkl. 7% MwSt.<br>zzgl. <a class="colorbox-node" href="/node/1260?width=900&amp;height=600">Versandkosten</a></p>',
      'format' => 'full_html',
    ),
    'use_token' => 0,
  );
  $export['link_zzgl_versandkosten'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'new_field';
  $ds_field->label = 'New! Field';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'product_display|*';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
  if (!empty($entity->created)) {
    $now = new DateTime();
    $interval = ($now->format(\'U\') - $entity->created) / 86400;
    if ($interval <= 60) print "<span class=\\"new\\">Neu!</span>";
  }
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['new_field'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'warenkorb_icon';
  $ds_field->label = 'Warenkorb Icon';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'commerce_line_item' => 'commerce_line_item',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<p>[icon:fontawesome_fontello:icon-basket]</p>
',
      'format' => 'html',
    ),
    'use_token' => 1,
  );
  $export['warenkorb_icon'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function inkshop_content_types_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'commerce_order|commerce_order|form';
  $ds_layout->entity_type = 'commerce_order';
  $ds_layout->bundle = 'commerce_order';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'commerce_line_items',
        1 => 'commerce_order_total',
        2 => 'commerce_customer_billing',
        3 => 'commerce_customer_shipping',
        4 => 'group_commerce_order_note',
        5 => 'commerce_customer_eu_vat_rc',
        6 => 'field_commerce_billy_i_date',
        7 => 'field_commerce_billy_cancel_date',
        8 => 'field_commerce_order_bemerkungen',
      ),
      'hidden' => array(
        9 => 'field_commerce_order_bankbeleg',
        10 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'commerce_line_items' => 'ds_content',
      'commerce_order_total' => 'ds_content',
      'commerce_customer_billing' => 'ds_content',
      'commerce_customer_shipping' => 'ds_content',
      'group_commerce_order_note' => 'ds_content',
      'commerce_customer_eu_vat_rc' => 'ds_content',
      'field_commerce_billy_i_date' => 'ds_content',
      'field_commerce_billy_cancel_date' => 'ds_content',
      'field_commerce_order_bemerkungen' => 'ds_content',
      'field_commerce_order_bankbeleg' => 'hidden',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['commerce_order|commerce_order|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'commerce_product|product|form';
  $ds_layout->entity_type = 'commerce_product';
  $ds_layout->bundle = 'product';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_product_subtitle',
        2 => 'sku',
        3 => 'commerce_price',
        4 => 'commerce_de_vat',
        5 => 'field_physical_weight',
        6 => 'commerce_stock',
        7 => 'commerce_stock_override',
        8 => 'field_product_image',
        9 => 'field_product_pdf',
      ),
      'hidden' => array(
        10 => 'status',
        11 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_product_subtitle' => 'ds_content',
      'sku' => 'ds_content',
      'commerce_price' => 'ds_content',
      'commerce_de_vat' => 'ds_content',
      'field_physical_weight' => 'ds_content',
      'commerce_stock' => 'ds_content',
      'commerce_stock_override' => 'ds_content',
      'field_product_image' => 'ds_content',
      'field_product_pdf' => 'ds_content',
      'status' => 'hidden',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['commerce_product|product|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|product_display|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'product_display';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'product:field_product_subtitle',
      ),
      'left' => array(
        1 => 'product:field_product_image',
        2 => 'field_pd_description',
      ),
      'right' => array(
        3 => 'product:sku',
        4 => 'product:field_product_pdf',
        5 => 'field_pd_category',
        6 => 'field_pd_type',
        7 => 'field_tags',
        8 => 'product:commerce_price',
        9 => 'link_zzgl_versandkosten',
        10 => 'field_commerce_product',
      ),
      'footer' => array(
        11 => 'new_field',
        12 => 'field_socialshareprivacy',
      ),
    ),
    'fields' => array(
      'product:field_product_subtitle' => 'header',
      'product:field_product_image' => 'left',
      'field_pd_description' => 'left',
      'product:sku' => 'right',
      'product:field_product_pdf' => 'right',
      'field_pd_category' => 'right',
      'field_pd_type' => 'right',
      'field_tags' => 'right',
      'product:commerce_price' => 'right',
      'link_zzgl_versandkosten' => 'right',
      'field_commerce_product' => 'right',
      'new_field' => 'footer',
      'field_socialshareprivacy' => 'footer',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|product_display|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|product_display|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'product_display';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title_field',
        1 => 'field_pd_description',
        2 => 'field_pd_type',
        3 => 'field_pd_category',
        4 => 'field_tags',
        5 => 'field_commerce_product',
        6 => 'field_kurzel_buchhaltung',
        7 => 'field_pd_kampagne',
        8 => 'field_pd_aehnliche_produkte',
        9 => 'group_produkteigenschaften',
      ),
      'hidden' => array(
        10 => 'metatags',
        11 => 'path',
        12 => 'field_pd_pdfs',
        13 => 'redirect',
        14 => 'field_socialshareprivacy',
        15 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title_field' => 'ds_content',
      'field_pd_description' => 'ds_content',
      'field_pd_type' => 'ds_content',
      'field_pd_category' => 'ds_content',
      'field_tags' => 'ds_content',
      'field_commerce_product' => 'ds_content',
      'field_kurzel_buchhaltung' => 'ds_content',
      'field_pd_kampagne' => 'ds_content',
      'field_pd_aehnliche_produkte' => 'ds_content',
      'group_produkteigenschaften' => 'ds_content',
      'metatags' => 'hidden',
      'path' => 'hidden',
      'field_pd_pdfs' => 'hidden',
      'redirect' => 'hidden',
      'field_socialshareprivacy' => 'hidden',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|product_display|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|product_display|suedlink';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'product_display';
  $ds_layout->view_mode = 'suedlink';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'product:field_product_image',
        1 => 'title_field',
        2 => 'product:field_product_pdf',
      ),
    ),
    'fields' => array(
      'product:field_product_image' => 'ds_content',
      'title_field' => 'ds_content',
      'product:field_product_pdf' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|product_display|suedlink'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|product_display|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'product_display';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'product:field_product_image',
        1 => 'title_field',
        2 => 'field_pd_untertitel_liste',
        3 => 'product:field_product_pdf',
        4 => 'product:commerce_price',
        5 => 'product:field_product_tax',
        6 => 'link_zzgl_versandkosten',
        7 => 'field_commerce_product',
        8 => 'product:commerce_stock',
        9 => 'field_pd_type',
        10 => 'field_pd_category',
        11 => 'new_field',
      ),
    ),
    'fields' => array(
      'product:field_product_image' => 'ds_content',
      'title_field' => 'ds_content',
      'field_pd_untertitel_liste' => 'ds_content',
      'product:field_product_pdf' => 'ds_content',
      'product:commerce_price' => 'ds_content',
      'product:field_product_tax' => 'ds_content',
      'link_zzgl_versandkosten' => 'ds_content',
      'field_commerce_product' => 'ds_content',
      'product:commerce_stock' => 'ds_content',
      'field_pd_type' => 'ds_content',
      'field_pd_category' => 'ds_content',
      'new_field' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|product_display|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|webform|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'webform';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_suedlink_untertitel',
        1 => 'field_suedlink_einleitung',
        2 => 'field_suedlink_abo_berschrift',
        3 => 'webform',
      ),
    ),
    'fields' => array(
      'field_suedlink_untertitel' => 'ds_content',
      'field_suedlink_einleitung' => 'ds_content',
      'field_suedlink_abo_berschrift' => 'ds_content',
      'webform' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|webform|default'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function inkshop_content_types_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'aehnliche_produkte';
  $ds_view_mode->label = 'Ähnliche Produkte';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['aehnliche_produkte'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'suedlink';
  $ds_view_mode->label = 'suedlink';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['suedlink'] = $ds_view_mode;

  return $export;
}
