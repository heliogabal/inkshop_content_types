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
  $templates['f_rderhinweis_bmz_eg_st_nords_d_'] = array(
    'title' => 'Förderhinweis BMZ-EG, St.NordSüd, Brot',
    'description' => 'Logos: BMZ, Stiftung NordSüdBrücken, Text: + Brot für die Welt',
    'weight' => 4,
    'fid' => 0,
    'body' => '<div class="finanzhinweis">
	<p>Gefördert von Engagement Global im Auftrag des BMZ, der Stiftung Nord-Süd-Brücken sowie aus Mitteln des Kirchlichen Entwicklungsdienstes durch Brot für die Welt-Evangelischer Entwicklungsdienst. Für den Inhalt dieser Publikation ist der Herausgeber allein verantwortlich; die hier dargestellten Positionen geben nicht den Standpunkt der Zuwendungsgebern wieder.</p>

	<p>[[{"fid":"1635","view_mode":"default","fields":{"format":"default","field_file_image_alt_text[und][0][value]":"Logo Stiftung Nord-Süd-Brücken","field_file_image_title_text[und][0][value]":false},"type":"media","field_deltas":{"1":{"format":"default","field_file_image_alt_text[und][0][value]":"Logo Stiftung Nord-Süd-Brücken","field_file_image_title_text[und][0][value]":false}},"link_text":null,"attributes":{"alt":"Logo Stiftung Nord-Süd-Brücken","height":50,"width":105,"class":"media-element file-default","data-delta":"1"}}]]&nbsp; [[{"fid":"1637","view_mode":"default","fields":{"format":"default","field_file_image_alt_text[und][0][value]":"Logo BMZ","field_file_image_title_text[und][0][value]":false},"type":"media","field_deltas":{"1":{"format":"default","field_file_image_alt_text[und][0][value]":"Logo BMZ","field_file_image_title_text[und][0][value]":false}},"link_text":null,"attributes":{"alt":"Logo BMZ","height":55,"width":161,"class":"media-element file-default","data-delta":"1"}}]]</p>
</div>
',
    'format' => 'filtered_html',
    'name' => 'f_rderhinweis_bmz_eg_st_nords_d_',
    'content_types' => array(
      'product_display' => 'Produktansicht',
    ),
  );
  $templates['f_rderhinweis_eu_bmz_eg_lez_berl'] = array(
    'title' => 'Förderhinweis EU, BMZ-EG, LEZ-Berlin, St.NordSüd, Brot',
    'description' => 'Logos: EU, BMZ, Stiftung NordSüdBrücken, LEZ-Berlin, Text: + Brot für die Welt',
    'weight' => 1,
    'fid' => 0,
    'body' => '<div class="finanzhinweis"><p>Gefördert aus Mitteln der Europäischen Union, von Brot für die Welt – Evangelischer Entwicklungsdienst, der Stiftung Nord-Süd-Brücken, der Landesstelle für Entwicklungszusammenarbeit des Berliner Senats und des Katholischen Fonds sowie von Engagement Global im Auftrag des Bundesministeriums für wirtschaftliche Zusammenarbeit und Entwicklung. Für den Inhalt dieser Publikation sind die Herausgeber alleine verantwortlich; die hier dargestellten Positionen geben nicht den Standpunkt der Zuwendungsgeber wieder.</p><p>[[{"fid":"1634","view_mode":"default","fields":{"format":"default","field_file_image_alt_text[und][0][value]":"Fahne Europäische Union","field_file_image_title_text[und][0][value]":false},"type":"media","field_deltas":{"1":{"format":"default","field_file_image_alt_text[und][0][value]":"Fahne Europäische Union","field_file_image_title_text[und][0][value]":false}},"link_text":null,"attributes":{"alt":"Fahne Europäische Union","height":50,"width":77,"class":"media-element file-default","data-delta":"1"}}]] [[{"fid":"1635","view_mode":"default","fields":{"format":"default","field_file_image_alt_text[und][0][value]":"Logo Stiftung Nord-Süd-Brücken","field_file_image_title_text[und][0][value]":false},"type":"media","field_deltas":{"1":{"format":"default","field_file_image_alt_text[und][0][value]":"Logo Stiftung Nord-Süd-Brücken","field_file_image_title_text[und][0][value]":false}},"link_text":null,"attributes":{"alt":"Logo Stiftung Nord-Süd-Brücken","height":50,"width":105,"class":"media-element file-default","data-delta":"1"}}]] [[{"fid":"1636","view_mode":"default","fields":{"format":"default","field_file_image_alt_text[und][0][value]":"Logo LEZ Berlin","field_file_image_title_text[und][0][value]":false},"type":"media","field_deltas":{"1":{"format":"default","field_file_image_alt_text[und][0][value]":"Logo LEZ Berlin","field_file_image_title_text[und][0][value]":false}},"link_text":null,"attributes":{"alt":"Logo LEZ Berlin","height":49,"width":249,"class":"media-element file-default","data-delta":"1"}}]] [[{"fid":"1637","view_mode":"default","fields":{"format":"default","field_file_image_alt_text[und][0][value]":"Logo BMZ","field_file_image_title_text[und][0][value]":false},"type":"media","field_deltas":{"1":{"format":"default","field_file_image_alt_text[und][0][value]":"Logo BMZ","field_file_image_title_text[und][0][value]":false}},"link_text":null,"attributes":{"alt":"Logo BMZ","height":55,"width":158,"class":"media-element file-default","data-delta":"1"}}]]</p></div>',
    'format' => 'full_html',
    'name' => 'f_rderhinweis_eu_bmz_eg_lez_berl',
    'content_types' => array(
      'product_display' => 'Produktansicht',
    ),
  );
  $templates['f_rderhinweis_st_nords_d_brot'] = array(
    'title' => 'Förderhinweis St.NordSüd, Brot',
    'description' => 'Logo: Nur Stiftung Nord-Süd-Brücken, Text: + Brot für die Welt',
    'weight' => 5,
    'fid' => 0,
    'body' => '<div class="finanzhinweis"><p>Gefördert von der Stiftung Nord-Süd-Brücken sowie aus Mitteln des Kirchlichen Entwicklungsdienstes durch Brot für die Welt-Evangelischer Entwicklungsdienst. Für den Inhalt dieser Publikation ist der Herausgeber allein verantwortlich.</p><p>&nbsp;[[{"fid":"1625","view_mode":"default","fields":{"format":"default","field_file_image_alt_text[und][0][value]":"Logo Stiftung Nord-Süd-Brücken","field_file_image_title_text[und][0][value]":"Logo Stiftung Nord-Süd-Brücken"},"type":"media","field_deltas":{"1":{"format":"default","field_file_image_alt_text[und][0][value]":"Logo Stiftung Nord-Süd-Brücken","field_file_image_title_text[und][0][value]":"Logo Stiftung Nord-Süd-Brücken"}},"link_text":null,"attributes":{"alt":"Logo Stiftung Nord-Süd-Brücken","title":"Logo Stiftung Nord-Süd-Brücken","height":55,"width":115,"style":"float: left;","class":"media-element colorbox file-default","data-delta":"1"}}]]</p></div>',
    'format' => 'full_html',
    'name' => 'f_rderhinweis_st_nords_d_brot',
    'content_types' => array(
      'product_display' => 'Produktansicht',
    ),
  );
  $templates['finanzhinweis_brot_eed_nsb'] = array(
    'title' => 'Finanzhinweis Südlink',
    'description' => 'Obligatorischer Förderhinweis der unter jeden Südlink gehört',
    'weight' => 0,
    'fid' => 0,
    'body' => '<div class="finanzhinweis"><p>Gefördert von Engagement Global im Auftrag des BMZ, der Landesstelle für Entwicklungszusammenarbeit des Landes Berlin, von der Stiftung Nord-Süd-Brücken sowie aus Mitteln des Kirchlichen Entwicklungsdienstes durch Brot für die Welt-Evangelischer Entwicklungsdienst. Für den Inhalt dieser Publikation ist der Herausgeber allein verantwortlich; die hier dargestellten Positionen geben nicht den Standpunkt von Engagement Global gGmbH, dem Bundesministerium für wirtschaftliche Zusammenarbeit und Entwicklung, der Senatsverwaltung für Wirtschaft, Technologie und Forschung sowie den anderen Zuwendungsgebern wieder.</p><p>&nbsp;[[{"fid":"1625","view_mode":"default","fields":{"format":"default","field_file_image_alt_text[und][0][value]":"Logo Stiftung Nord-Süd-Brücken","field_file_image_title_text[und][0][value]":"Logo Stiftung Nord-Süd-Brücken"},"type":"media","field_deltas":{"1":{"format":"default","field_file_image_alt_text[und][0][value]":"Logo Stiftung Nord-Süd-Brücken","field_file_image_title_text[und][0][value]":"Logo Stiftung Nord-Süd-Brücken"}},"link_text":null,"attributes":{"alt":"Logo Stiftung Nord-Süd-Brücken","title":"Logo Stiftung Nord-Süd-Brücken","height":112,"width":234,"style":"width: 117px; height: 56px; float: left;","class":"media-element colorbox file-default","data-delta":"1"}}]][[{"fid":"1623","view_mode":"default","fields":{"format":"default","field_file_image_alt_text[und][0][value]":"Logo Bundesministerium für wirtschaftliche Zusammenarbeit und Entwicklung","field_file_image_title_text[und][0][value]":"Logo Bundesministerium für wirtschaftliche Zusammenarbeit und Entwicklung"},"type":"media","field_deltas":{"1":{"format":"default","field_file_image_alt_text[und][0][value]":"Logo Bundesministerium für wirtschaftliche Zusammenarbeit und Entwicklung","field_file_image_title_text[und][0][value]":"Logo Bundesministerium für wirtschaftliche Zusammenarbeit und Entwicklung"}},"link_text":null,"attributes":{"alt":"Logo Bundesministerium für wirtschaftliche Zusammenarbeit und Entwicklung","title":"Logo Bundesministerium für wirtschaftliche Zusammenarbeit und Entwicklung","height":112,"width":250,"style":"width: 125px; height: 56px; float: left;","class":"media-element colorbox file-default","data-delta":"1"}}]]&nbsp;[[{"fid":"1626","view_mode":"default","fields":{"format":"default","field_file_image_alt_text[und][0][value]":"Logo Landesstelle für Entwicklungszusammenarbeit","field_file_image_title_text[und][0][value]":"Logo Landesstelle für Entwicklungszusammenarbeit"},"type":"media","field_deltas":{"1":{"format":"default","field_file_image_alt_text[und][0][value]":"Logo Landesstelle für Entwicklungszusammenarbeit","field_file_image_title_text[und][0][value]":"Logo Landesstelle für Entwicklungszusammenarbeit"}},"link_text":null,"attributes":{"alt":"Logo Landesstelle für Entwicklungszusammenarbeit","title":"Logo Landesstelle für Entwicklungszusammenarbeit","height":112,"width":482,"style":"width: 241px; height: 56px; float: left;","class":"media-element colorbox file-default","data-delta":"1"}}]]</p></div>',
    'format' => 'full_html',
    'name' => 'finanzhinweis_brot_eed_nsb',
    'content_types' => array(
      'product_display' => 'Produktansicht',
    ),
  );
  return $templates;
}
