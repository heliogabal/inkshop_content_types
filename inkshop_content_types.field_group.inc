<?php
/**
 * @file
 * inkshop_content_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function inkshop_content_types_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_aehnlich|node|product_display|form';
  $field_group->group_name = 'group_aehnlich';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_display';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Ähnliche Produkte',
    'weight' => '3',
    'children' => array(
      0 => 'field_pd_aehnliche_produkte',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-aehnlich field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_aehnlich|node|product_display|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basis|node|product_display|form';
  $field_group->group_name = 'group_basis';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_display';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Texte',
    'weight' => '0',
    'children' => array(
      0 => 'field_pd_description',
      1 => 'title_field',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Texte',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-basis field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_basis|node|product_display|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dateien|node|product_display|form';
  $field_group->group_name = 'group_dateien';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_display';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dateien',
    'weight' => '5',
    'children' => array(
      0 => 'field_pd_pdfs',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-dateien field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_dateien|node|product_display|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_kategorisierung|node|product_display|form';
  $field_group->group_name = 'group_kategorisierung';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_display';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Kategorisierung',
    'weight' => '2',
    'children' => array(
      0 => 'field_pd_category',
      1 => 'field_pd_type',
      2 => 'field_pd_kampagne',
      3 => 'field_tags',
      4 => 'field_kurzel_buchhaltung',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_kategorisierung|node|product_display|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_produkteigenschaften|node|product_display|form';
  $field_group->group_name = 'group_produkteigenschaften';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_display';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Produkteigenschaften',
    'weight' => '1',
    'children' => array(
      0 => 'field_commerce_product',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-produkteigenschaften field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_produkteigenschaften|node|product_display|form'] = $field_group;

  return $export;
}
