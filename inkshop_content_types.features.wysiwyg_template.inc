<?php
/**
 * @file
 * inkshop_content_types.features.wysiwyg_template.inc
 */

/**
 * Implements hook_wysiwyg_template_default_templates().
 */
function inkshop_content_types_wysiwyg_template_default_templates() {
  $templates = array();
  $templates['finanzhinweis_brot_eed_nsb'] = array(
    'title' => 'Finanzhinweis Brot für die Welt, EED und Nord-Süd-Brücken',
    'description' => '',
    'weight' => 0,
    'fid' => 0,
    'body' => '<div class="finanzhinweis"><p>[[{"fid":"1532","view_mode":"default","fields":{"format":"default","field_file_image_alt_text[und][0][value]":"Logo Stiftung Nord-Süd-Brücken","field_file_image_title_text[und][0][value]":"Stiftung Nord-Süd-Brücken"},"type":"media","attributes":{"alt":"logo_snsb_klein.jpg","height":83,"width":50,"style":"width: 50px; height: 83px; float: left;","class":"media-element file-default"},"link_text":null}]]Diese Publikation wurde mit finanzieller Unterstützung von Brot für die Welt &ndash; Evangelischer Entwicklungsdienst und der Stiftung Nord-Süd-Brücken erstellt. Für den Inhalt dieser Publikation ist der Herausgeber allein verantwortlich; die hier dargestellten Positionen geben nicht den Standpunkt des/der Zuwendungsgeber wieder.</p></div>',
    'format' => 'plain_text',
    'name' => 'finanzhinweis_brot_eed_nsb',
    'content_types' => array(
      'product_display' => 'Product Display',
    ),
  );
  return $templates;
}
