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
      'weight' => '11',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'new_field' => array(
      'weight' => '13',
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
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'new_field' => array(
      'weight' => '11',
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
  );
  $export['node|product_display|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|subscription|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'subscription';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|subscription|default'] = $ds_fieldsetting;

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
      'value' => '<p>zzgl. <a class="colorbox-node" href="/node/1260?width=900&amp;height=600">Versandkosten</a></p>
',
      'format' => 'html',
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
    if ($interval <= 120) print "<span class=\\"new\\">Neu!</span>";
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
  $ds_layout->id = 'node|product_display|aehnliche_produkte';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'product_display';
  $ds_layout->view_mode = 'aehnliche_produkte';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'product:field_product_subtitle',
        2 => 'product:field_product_image',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'product:field_product_subtitle' => 'ds_content',
      'product:field_product_image' => 'ds_content',
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
  $export['node|product_display|aehnliche_produkte'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|product_display|checkout_pane';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'product_display';
  $ds_layout->view_mode = 'checkout_pane';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'product:field_product_subtitle',
        1 => 'product:commerce_price',
        2 => 'product:field_product_image',
        3 => 'product:field_product_pdf',
        4 => 'product:field_physical_weight',
        5 => 'product:commerce_stock',
        6 => 'product:field_product_tax',
        7 => 'product:field_wholesale_price',
        8 => 'product:commerce_stock_override',
      ),
    ),
    'fields' => array(
      'product:field_product_subtitle' => 'ds_content',
      'product:commerce_price' => 'ds_content',
      'product:field_product_image' => 'ds_content',
      'product:field_product_pdf' => 'ds_content',
      'product:field_physical_weight' => 'ds_content',
      'product:commerce_stock' => 'ds_content',
      'product:field_product_tax' => 'ds_content',
      'product:field_wholesale_price' => 'ds_content',
      'product:commerce_stock_override' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|product_display|checkout_pane'] = $ds_layout;

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
        9 => 'product:field_product_tax',
        10 => 'link_zzgl_versandkosten',
        11 => 'field_commerce_product',
      ),
      'footer' => array(
        12 => 'new_field',
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
      'product:field_product_tax' => 'right',
      'link_zzgl_versandkosten' => 'right',
      'field_commerce_product' => 'right',
      'new_field' => 'footer',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
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
        0 => 'group_basis',
        1 => 'group_produkteigenschaften',
        2 => 'title_field',
        3 => 'field_pd_description',
        4 => 'group_kategorisierung',
        5 => 'group_dateien',
        6 => 'group_aehnlich',
        7 => 'field_commerce_product',
        9 => 'field_pd_aehnliche_produkte',
        11 => 'field_pd_type',
        13 => 'field_pd_pdfs',
        14 => 'field_pd_category',
        15 => 'field_pd_kampagne',
        16 => 'field_tags',
        17 => 'field_kurzel_buchhaltung',
      ),
      'hidden' => array(
        8 => 'metatags',
        10 => 'path',
        12 => 'redirect',
        18 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'group_basis' => 'ds_content',
      'group_produkteigenschaften' => 'ds_content',
      'title_field' => 'ds_content',
      'field_pd_description' => 'ds_content',
      'group_kategorisierung' => 'ds_content',
      'group_dateien' => 'ds_content',
      'group_aehnlich' => 'ds_content',
      'field_commerce_product' => 'ds_content',
      'metatags' => 'hidden',
      'field_pd_aehnliche_produkte' => 'ds_content',
      'path' => 'hidden',
      'field_pd_type' => 'ds_content',
      'redirect' => 'hidden',
      'field_pd_pdfs' => 'ds_content',
      'field_pd_category' => 'ds_content',
      'field_pd_kampagne' => 'ds_content',
      'field_tags' => 'ds_content',
      'field_kurzel_buchhaltung' => 'ds_content',
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
  );
  $export['node|product_display|form'] = $ds_layout;

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
        2 => 'product:field_product_subtitle',
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
      'product:field_product_subtitle' => 'ds_content',
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
  $ds_layout->id = 'node|subscription|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'subscription';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'product:commerce_recurring_ini_price',
        2 => 'body',
        3 => 'product:field_rec_description',
        4 => 'product:commerce_price',
        5 => 'field_product',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'product:commerce_recurring_ini_price' => 'ds_content',
      'body' => 'ds_content',
      'product:field_rec_description' => 'ds_content',
      'product:commerce_price' => 'ds_content',
      'field_product' => 'ds_content',
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
  $export['node|subscription|default'] = $ds_layout;

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

  return $export;
}
