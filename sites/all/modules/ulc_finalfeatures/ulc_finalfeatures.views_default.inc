<?php
/**
 * @file
 * ulc_finalfeatures.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ulc_finalfeatures_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'galleries';
  $view->description = 'Set of Image Galleries';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Image Gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'gallery_row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Large Cover Photo */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  /* Field: Content: Gallery Thumbnails */
  $handler->display->display_options['fields']['field_smaller_thumbs']['id'] = 'field_smaller_thumbs';
  $handler->display->display_options['fields']['field_smaller_thumbs']['table'] = 'field_data_field_smaller_thumbs';
  $handler->display->display_options['fields']['field_smaller_thumbs']['field'] = 'field_smaller_thumbs';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image_gallery' => 'image_gallery',
  );
  /* Filter criterion: Content: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = array(
    0 => '5',
  );
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator_id'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['label'] = 'Tags (field_tags)';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['identifier'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';

  /* Display: Youth Gallery */
  $handler = $view->new_display('block', 'Youth Gallery', 'block');
  $handler->display->display_options['display_description'] = 'Youth Images';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'gallery_row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = 'gallery-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Large Cover Photo */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_class'] = 'large_gallery-image';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'colorbox_node_style' => 'image_gallery_1',
    'colorbox_image_style' => 'cb_images',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'colorbox_caption_custom' => '',
  );
  /* Field: Content: Gallery Thumbnails */
  $handler->display->display_options['fields']['field_smaller_thumbs']['id'] = 'field_smaller_thumbs';
  $handler->display->display_options['fields']['field_smaller_thumbs']['table'] = 'field_data_field_smaller_thumbs';
  $handler->display->display_options['fields']['field_smaller_thumbs']['field'] = 'field_smaller_thumbs';
  $handler->display->display_options['fields']['field_smaller_thumbs']['label'] = '';
  $handler->display->display_options['fields']['field_smaller_thumbs']['element_class'] = 'thumbnail_row';
  $handler->display->display_options['fields']['field_smaller_thumbs']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_smaller_thumbs']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_smaller_thumbs']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_smaller_thumbs']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_smaller_thumbs']['settings'] = array(
    'colorbox_node_style' => 'image_gallery_2',
    'colorbox_image_style' => 'cb_images',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_smaller_thumbs']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_smaller_thumbs']['separator'] = '  ';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['field_body']['id'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['table'] = 'field_data_field_body';
  $handler->display->display_options['fields']['field_body']['field'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['label'] = '';
  $handler->display->display_options['fields']['field_body']['element_class'] = 'gallery-description';
  $handler->display->display_options['fields']['field_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_body']['element_default_classes'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_class'] = 'modify-links';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Gallery';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_class'] = 'modify-links';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = 'Delete Gallery';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image_gallery' => 'image_gallery',
  );
  /* Filter criterion: Content: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = array(
    0 => '4',
  );
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator_id'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['label'] = 'Tags (field_tags)';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['identifier'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';

  /* Display: Men's Gallery */
  $handler = $view->new_display('block', 'Men\'s Gallery', 'block_2');
  $handler->display->display_options['display_description'] = 'Men\'s Images';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'gallery_row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = 'gallery-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Large Cover Photo */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_class'] = 'large_gallery-image';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'colorbox_node_style' => 'image_gallery_1',
    'colorbox_image_style' => 'cb_images',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'colorbox_caption_custom' => '',
  );
  /* Field: Content: Gallery Thumbnails */
  $handler->display->display_options['fields']['field_smaller_thumbs']['id'] = 'field_smaller_thumbs';
  $handler->display->display_options['fields']['field_smaller_thumbs']['table'] = 'field_data_field_smaller_thumbs';
  $handler->display->display_options['fields']['field_smaller_thumbs']['field'] = 'field_smaller_thumbs';
  $handler->display->display_options['fields']['field_smaller_thumbs']['label'] = '';
  $handler->display->display_options['fields']['field_smaller_thumbs']['element_class'] = 'thumbnail_row';
  $handler->display->display_options['fields']['field_smaller_thumbs']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_smaller_thumbs']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_smaller_thumbs']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_smaller_thumbs']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_smaller_thumbs']['settings'] = array(
    'colorbox_node_style' => 'image_gallery_2',
    'colorbox_image_style' => 'cb_images',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_smaller_thumbs']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_smaller_thumbs']['separator'] = '  ';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['field_body']['id'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['table'] = 'field_data_field_body';
  $handler->display->display_options['fields']['field_body']['field'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['label'] = '';
  $handler->display->display_options['fields']['field_body']['element_class'] = 'gallery-description';
  $handler->display->display_options['fields']['field_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_body']['element_default_classes'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_class'] = 'modify-links';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Gallery';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_class'] = 'modify-links';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = 'Delete Gallery';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image_gallery' => 'image_gallery',
  );
  /* Filter criterion: Content: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = array(
    0 => '5',
  );
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator_id'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['label'] = 'Tags (field_tags)';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['identifier'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';

  /* Display: Women's Gallery */
  $handler = $view->new_display('block', 'Women\'s Gallery', 'block_3');
  $handler->display->display_options['display_description'] = 'Women\'s Images';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'gallery_row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = 'gallery-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Large Cover Photo */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_class'] = 'large_gallery-image';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'colorbox_node_style' => 'image_gallery_1',
    'colorbox_image_style' => 'cb_images',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'colorbox_caption_custom' => '',
  );
  /* Field: Content: Gallery Thumbnails */
  $handler->display->display_options['fields']['field_smaller_thumbs']['id'] = 'field_smaller_thumbs';
  $handler->display->display_options['fields']['field_smaller_thumbs']['table'] = 'field_data_field_smaller_thumbs';
  $handler->display->display_options['fields']['field_smaller_thumbs']['field'] = 'field_smaller_thumbs';
  $handler->display->display_options['fields']['field_smaller_thumbs']['label'] = '';
  $handler->display->display_options['fields']['field_smaller_thumbs']['element_class'] = 'thumbnail_row';
  $handler->display->display_options['fields']['field_smaller_thumbs']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_smaller_thumbs']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_smaller_thumbs']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_smaller_thumbs']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_smaller_thumbs']['settings'] = array(
    'colorbox_node_style' => 'image_gallery_2',
    'colorbox_image_style' => 'cb_images',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_smaller_thumbs']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_smaller_thumbs']['separator'] = '  ';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['field_body']['id'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['table'] = 'field_data_field_body';
  $handler->display->display_options['fields']['field_body']['field'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['label'] = '';
  $handler->display->display_options['fields']['field_body']['element_class'] = 'gallery-description';
  $handler->display->display_options['fields']['field_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_body']['element_default_classes'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_class'] = 'modify-links';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Gallery';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_class'] = 'modify-links';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = 'Delete Gallery';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image_gallery' => 'image_gallery',
  );
  /* Filter criterion: Content: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = array(
    0 => '6',
  );
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator_id'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['label'] = 'Tags (field_tags)';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['identifier'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';

  /* Display: Music Galleries */
  $handler = $view->new_display('block', 'Music Galleries', 'block_4');
  $handler->display->display_options['display_description'] = 'Music Galleries';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'gallery_row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = 'gallery-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Large Cover Photo */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_class'] = 'large_gallery-image';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'colorbox_node_style' => 'image_gallery_1',
    'colorbox_image_style' => 'cb_images',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'colorbox_caption_custom' => '',
  );
  /* Field: Content: Gallery Thumbnails */
  $handler->display->display_options['fields']['field_smaller_thumbs']['id'] = 'field_smaller_thumbs';
  $handler->display->display_options['fields']['field_smaller_thumbs']['table'] = 'field_data_field_smaller_thumbs';
  $handler->display->display_options['fields']['field_smaller_thumbs']['field'] = 'field_smaller_thumbs';
  $handler->display->display_options['fields']['field_smaller_thumbs']['label'] = '';
  $handler->display->display_options['fields']['field_smaller_thumbs']['element_class'] = 'thumbnail_row';
  $handler->display->display_options['fields']['field_smaller_thumbs']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_smaller_thumbs']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_smaller_thumbs']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_smaller_thumbs']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_smaller_thumbs']['settings'] = array(
    'colorbox_node_style' => 'image_gallery_2',
    'colorbox_image_style' => 'cb_images',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_smaller_thumbs']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_smaller_thumbs']['separator'] = '  ';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['field_body']['id'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['table'] = 'field_data_field_body';
  $handler->display->display_options['fields']['field_body']['field'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['label'] = '';
  $handler->display->display_options['fields']['field_body']['element_class'] = 'gallery-description';
  $handler->display->display_options['fields']['field_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_body']['element_default_classes'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_class'] = 'modify-links';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Gallery';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_class'] = 'modify-links';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = 'Delete Gallery';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image_gallery' => 'image_gallery',
  );
  /* Filter criterion: Content: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = array(
    0 => '9',
  );
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator_id'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['label'] = 'Tags (field_tags)';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['identifier'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';

  /* Display: Outreach Galleries */
  $handler = $view->new_display('block', 'Outreach Galleries', 'block_5');
  $handler->display->display_options['display_description'] = 'Outreach Galleries';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'gallery_row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = 'gallery-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Large Cover Photo */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_class'] = 'large_gallery-image';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'colorbox_node_style' => 'image_gallery_1',
    'colorbox_image_style' => 'cb_images',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'colorbox_caption_custom' => '',
  );
  /* Field: Content: Gallery Thumbnails */
  $handler->display->display_options['fields']['field_smaller_thumbs']['id'] = 'field_smaller_thumbs';
  $handler->display->display_options['fields']['field_smaller_thumbs']['table'] = 'field_data_field_smaller_thumbs';
  $handler->display->display_options['fields']['field_smaller_thumbs']['field'] = 'field_smaller_thumbs';
  $handler->display->display_options['fields']['field_smaller_thumbs']['label'] = '';
  $handler->display->display_options['fields']['field_smaller_thumbs']['element_class'] = 'thumbnail_row';
  $handler->display->display_options['fields']['field_smaller_thumbs']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_smaller_thumbs']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_smaller_thumbs']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_smaller_thumbs']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_smaller_thumbs']['settings'] = array(
    'colorbox_node_style' => 'image_gallery_2',
    'colorbox_image_style' => 'cb_images',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_smaller_thumbs']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_smaller_thumbs']['separator'] = '  ';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['field_body']['id'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['table'] = 'field_data_field_body';
  $handler->display->display_options['fields']['field_body']['field'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['label'] = '';
  $handler->display->display_options['fields']['field_body']['element_class'] = 'gallery-description';
  $handler->display->display_options['fields']['field_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_body']['element_default_classes'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_class'] = 'modify-links';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Gallery';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_class'] = 'modify-links';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = 'Delete Gallery';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image_gallery' => 'image_gallery',
  );
  /* Filter criterion: Content: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = array(
    0 => '10',
  );
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator_id'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['label'] = 'Tags (field_tags)';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['identifier'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';
  $export['galleries'] = $view;

  $view = new view();
  $view->name = 'newsletters';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'newsletters';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'The Voice';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = 'file_upload-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Post Date */
  $handler->display->display_options['fields']['field_post_date']['id'] = 'field_post_date';
  $handler->display->display_options['fields']['field_post_date']['table'] = 'field_data_field_post_date';
  $handler->display->display_options['fields']['field_post_date']['field'] = 'field_post_date';
  $handler->display->display_options['fields']['field_post_date']['label'] = '';
  $handler->display->display_options['fields']['field_post_date']['element_class'] = 'file_upload-date';
  $handler->display->display_options['fields']['field_post_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_post_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_post_date']['settings'] = array(
    'format_type' => 'date_no_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Upload PDF */
  $handler->display->display_options['fields']['field_pdf_upload']['id'] = 'field_pdf_upload';
  $handler->display->display_options['fields']['field_pdf_upload']['table'] = 'field_data_field_pdf_upload';
  $handler->display->display_options['fields']['field_pdf_upload']['field'] = 'field_pdf_upload';
  $handler->display->display_options['fields']['field_pdf_upload']['label'] = '';
  $handler->display->display_options['fields']['field_pdf_upload']['element_class'] = 'file_upload-link';
  $handler->display->display_options['fields']['field_pdf_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pdf_upload']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_pdf_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news_letter' => 'news_letter',
  );
  $export['newsletters'] = $view;

  $view = new view();
  $view->name = 'pastor_s_corner';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Pastor\'s Corner';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'blog_entry';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name' => 'name',
    'created' => 'created',
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
    'name_1' => 'name_1',
    'created_1' => 'created_1',
    'edit_node_1' => 'edit_node_1',
    'delete_node_1' => 'delete_node_1',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'pastors-blog';
  $handler->display->display_options['fields']['name']['alter']['alt'] = 'Pastor\'s Corner';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Large Cover Photo */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = 'Delete';
  /* Field: Colorbox: Colorbox trigger */
  $handler->display->display_options['fields']['colorbox']['id'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['table'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['field'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['label'] = '';
  $handler->display->display_options['fields']['colorbox']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['colorbox']['element_wrapper_class'] = 'blog_entry-title';
  $handler->display->display_options['fields']['colorbox']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['colorbox']['trigger_field'] = 'title';
  $handler->display->display_options['fields']['colorbox']['popup'] = '<span class="blog_full-title">[title]</span>
<span class="second-line">[name] – [created]</span>
<p class="blog_body">[body]</p>
<span class="modify-links">[edit_node] – [delete_node]</span>';
  $handler->display->display_options['fields']['colorbox']['gid'] = 1;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['path'] = 'pastors-blog';
  $handler->display->display_options['fields']['name_1']['alter']['alt'] = 'Pastor\'s Corner';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_1']['link_to_user'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'node';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = '';
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'short';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['label'] = '';
  $handler->display->display_options['fields']['body_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_1']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body_1']['settings'] = array(
    'trim_length' => '150',
  );
  /* Field: Content: Large Cover Photo */
  $handler->display->display_options['fields']['field_image_1']['id'] = 'field_image_1';
  $handler->display->display_options['fields']['field_image_1']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_1']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node_1']['id'] = 'edit_node_1';
  $handler->display->display_options['fields']['edit_node_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node_1']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node_1']['label'] = '';
  $handler->display->display_options['fields']['edit_node_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node_1']['text'] = 'Edit';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node_1']['id'] = 'delete_node_1';
  $handler->display->display_options['fields']['delete_node_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node_1']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node_1']['label'] = '';
  $handler->display->display_options['fields']['delete_node_1']['element_class'] = 'modify-links';
  $handler->display->display_options['fields']['delete_node_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['delete_node_1']['text'] = 'Delete';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['uid']['group_info']['label'] = 'Name';
  $handler->display->display_options['filters']['uid']['group_info']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['uid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blog' => 'blog',
  );

  /* Display: Full-Blog Posts */
  $handler = $view->new_display('page', 'Full-Blog Posts', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Pastor\'s Corner';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'blog_full-title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['path'] = 'pastors-blog2';
  $handler->display->display_options['fields']['name_1']['alter']['alt'] = 'Pastor\'s Corner';
  $handler->display->display_options['fields']['name_1']['element_type'] = '0';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_1']['element_wrapper_class'] = 'second-line_full';
  $handler->display->display_options['fields']['name_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name_1']['link_to_user'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'node';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = '';
  $handler->display->display_options['fields']['created_1']['element_type'] = '0';
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['element_wrapper_class'] = 'second-line_full';
  $handler->display->display_options['fields']['created_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'short';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['label'] = '';
  $handler->display->display_options['fields']['body_1']['element_type'] = 'p';
  $handler->display->display_options['fields']['body_1']['element_class'] = 'blog_full-body';
  $handler->display->display_options['fields']['body_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body_1']['type'] = 'text_plain';
  $handler->display->display_options['fields']['body_1']['settings'] = array(
    'trim_length' => '150',
  );
  /* Field: Content: Upload an Image */
  $handler->display->display_options['fields']['field_image_gallery_1']['id'] = 'field_image_gallery_1';
  $handler->display->display_options['fields']['field_image_gallery_1']['table'] = 'field_data_field_image_gallery_1';
  $handler->display->display_options['fields']['field_image_gallery_1']['field'] = 'field_image_gallery_1';
  $handler->display->display_options['fields']['field_image_gallery_1']['label'] = '';
  $handler->display->display_options['fields']['field_image_gallery_1']['element_class'] = 'blog_full-image';
  $handler->display->display_options['fields']['field_image_gallery_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_gallery_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image_gallery_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image_gallery_1']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_image_gallery_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_gallery_1']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_image_gallery_1']['settings'] = array(
    'colorbox_node_style' => 'image_gallery_1',
    'colorbox_image_style' => 'cb_images',
    'colorbox_gallery' => 'none',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'colorbox_caption_custom' => '',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node_1']['id'] = 'edit_node_1';
  $handler->display->display_options['fields']['edit_node_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node_1']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node_1']['label'] = '';
  $handler->display->display_options['fields']['edit_node_1']['element_class'] = 'modify-links';
  $handler->display->display_options['fields']['edit_node_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node_1']['text'] = 'Edit the Post';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node_1']['id'] = 'delete_node_1';
  $handler->display->display_options['fields']['delete_node_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node_1']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node_1']['label'] = '';
  $handler->display->display_options['fields']['delete_node_1']['element_class'] = 'modify-links';
  $handler->display->display_options['fields']['delete_node_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['delete_node_1']['text'] = 'Delete Post';
  $handler->display->display_options['path'] = 'pastors-blog2';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Pastor\'s Corner';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Trimmed Blog Posts */
  $handler = $view->new_display('block', 'Trimmed Blog Posts', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = 'blog_full-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'pastors-blog';
  $handler->display->display_options['fields']['name']['alter']['alt'] = 'Pastor\'s Corner';
  $handler->display->display_options['fields']['name']['element_class'] = 'second-line';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_class'] = 'second-line';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Field: Content: Upload an Image */
  $handler->display->display_options['fields']['field_image_gallery_1']['id'] = 'field_image_gallery_1';
  $handler->display->display_options['fields']['field_image_gallery_1']['table'] = 'field_data_field_image_gallery_1';
  $handler->display->display_options['fields']['field_image_gallery_1']['field'] = 'field_image_gallery_1';
  $handler->display->display_options['fields']['field_image_gallery_1']['label'] = '';
  $handler->display->display_options['fields']['field_image_gallery_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_gallery_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_gallery_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image_gallery_1']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_image_gallery_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_gallery_1']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_image_gallery_1']['settings'] = array(
    'colorbox_node_style' => 'x-large',
    'colorbox_image_style' => 'cb_images',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = 'Delete';
  /* Field: Colorbox: Colorbox trigger */
  $handler->display->display_options['fields']['colorbox']['id'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['table'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['field'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['label'] = '';
  $handler->display->display_options['fields']['colorbox']['element_type'] = '0';
  $handler->display->display_options['fields']['colorbox']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['colorbox']['element_wrapper_class'] = 'blog_summary-title';
  $handler->display->display_options['fields']['colorbox']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['colorbox']['trigger_field'] = 'title';
  $handler->display->display_options['fields']['colorbox']['popup'] = '<span class="blog_full-title">[title]</span></br>
<span class="second-line_full">[name] – [created]</span>
<p class="blog_full-body">[body]</p>
<div class="blog_colorbox-image">[field_image_gallery_1]</div>
<span class="modify-links">[edit_node] – [delete_node]</span>';
  $handler->display->display_options['fields']['colorbox']['gid'] = 1;
  $handler->display->display_options['fields']['colorbox']['width'] = '550px';
  $handler->display->display_options['fields']['colorbox']['height'] = '500px';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['path'] = 'pastors-blog2';
  $handler->display->display_options['fields']['name_1']['alter']['alt'] = 'Pastor\'s Corner';
  $handler->display->display_options['fields']['name_1']['element_type'] = '0';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_1']['element_wrapper_class'] = 'second-line_trim';
  $handler->display->display_options['fields']['name_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name_1']['link_to_user'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'node';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = '';
  $handler->display->display_options['fields']['created_1']['element_type'] = '0';
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['element_wrapper_class'] = 'second-line_trim';
  $handler->display->display_options['fields']['created_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'short';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['label'] = '';
  $handler->display->display_options['fields']['body_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['body_1']['element_class'] = 'blog_trim-body';
  $handler->display->display_options['fields']['body_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body_1']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body_1']['settings'] = array(
    'trim_length' => '150',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node_1']['id'] = 'edit_node_1';
  $handler->display->display_options['fields']['edit_node_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node_1']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node_1']['label'] = '';
  $handler->display->display_options['fields']['edit_node_1']['element_class'] = 'modify-links';
  $handler->display->display_options['fields']['edit_node_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node_1']['text'] = 'Edit';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node_1']['id'] = 'delete_node_1';
  $handler->display->display_options['fields']['delete_node_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node_1']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node_1']['label'] = '';
  $handler->display->display_options['fields']['delete_node_1']['element_class'] = 'modify-links';
  $handler->display->display_options['fields']['delete_node_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['delete_node_1']['text'] = 'Delete';
  $export['pastor_s_corner'] = $view;

  $view = new view();
  $view->name = 'staff_descriptions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Staff Descriptions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Our Staff';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'body' => 'body',
    'field_add_image' => 'field_add_image',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_class'] = 'staff_bio';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_add_image']['id'] = 'field_add_image';
  $handler->display->display_options['fields']['field_add_image']['table'] = 'field_data_field_add_image';
  $handler->display->display_options['fields']['field_add_image']['field'] = 'field_add_image';
  /* Sort criterion: Content: Weight (field_weight) */
  $handler->display->display_options['sorts']['field_weight_value']['id'] = 'field_weight_value';
  $handler->display->display_options['sorts']['field_weight_value']['table'] = 'field_data_field_weight';
  $handler->display->display_options['sorts']['field_weight_value']['field'] = 'field_weight_value';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'add_new_staff' => 'add_new_staff',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'staff_row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_add_image' => 'field_add_image',
    'body' => 'body',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_class'] = 'staff_title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_add_image']['id'] = 'field_add_image';
  $handler->display->display_options['fields']['field_add_image']['table'] = 'field_data_field_add_image';
  $handler->display->display_options['fields']['field_add_image']['field'] = 'field_add_image';
  $handler->display->display_options['fields']['field_add_image']['label'] = '';
  $handler->display->display_options['fields']['field_add_image']['element_class'] = 'staff_picture';
  $handler->display->display_options['fields']['field_add_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_add_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_add_image']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_add_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_add_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_add_image']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_add_image']['settings'] = array(
    'colorbox_node_style' => 'staff_pictures',
    'colorbox_image_style' => 'cb_images',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_class'] = 'modify-links';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Staff Member';
  $export['staff_descriptions'] = $view;

  $view = new view();
  $view->name = 'video_gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Video Gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sunday Services';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More Video\'s';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'video_row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'delete_node' => 'delete_node',
    'edit_node' => 'edit_node',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'add_new_video' => 'add_new_video',
  );

  /* Display: Video Page (Main Page) */
  $handler = $view->new_display('block', 'Video Page (Main Page)', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<a href="videos">Assorted Videos</a>';
  $handler->display->display_options['display_description'] = 'Main Video Uploads';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More Video\'s';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹‹ back 3';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'next 3 ››';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = 'video_title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Upload Video */
  $handler->display->display_options['fields']['field_upload_video']['id'] = 'field_upload_video';
  $handler->display->display_options['fields']['field_upload_video']['table'] = 'field_data_field_upload_video';
  $handler->display->display_options['fields']['field_upload_video']['field'] = 'field_upload_video';
  $handler->display->display_options['fields']['field_upload_video']['label'] = '';
  $handler->display->display_options['fields']['field_upload_video']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_upload_video']['element_class'] = 'video_upload';
  $handler->display->display_options['fields']['field_upload_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_upload_video']['element_default_classes'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_class'] = 'video_description';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_class'] = 'modify-links';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = 'Delete Video';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_class'] = 'modify-links';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Video';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'add_new_video' => 'add_new_video',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['operator'] = 'not';
  $handler->display->display_options['filters']['tid']['value'] = array(
    19 => '19',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'video_tags';
  $handler->display->display_options['filters']['tid']['hierarchy'] = 1;

  /* Display: Video Block (Left Column) */
  $handler = $view->new_display('block', 'Video Block (Left Column)', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Videos';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'video_row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'delete_node' => 'delete_node',
    'edit_node' => 'edit_node',
    'delete_node_1' => 'delete_node_1',
    'edit_node_1' => 'edit_node_1',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Upload Video */
  $handler->display->display_options['fields']['field_upload_video']['id'] = 'field_upload_video';
  $handler->display->display_options['fields']['field_upload_video']['table'] = 'field_data_field_upload_video';
  $handler->display->display_options['fields']['field_upload_video']['field'] = 'field_upload_video';
  $handler->display->display_options['fields']['field_upload_video']['label'] = '';
  $handler->display->display_options['fields']['field_upload_video']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_upload_video']['alter']['text'] = '[field_image]';
  $handler->display->display_options['fields']['field_upload_video']['element_class'] = 'video_size';
  $handler->display->display_options['fields']['field_upload_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_upload_video']['element_default_classes'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delete_node']['element_class'] = 'modify-links';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = 'Delete Video';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_class'] = 'modify-links';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Video';
  /* Field: Colorbox: Colorbox trigger */
  $handler->display->display_options['fields']['colorbox']['id'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['table'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['field'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['label'] = '';
  $handler->display->display_options['fields']['colorbox']['element_class'] = 'video_trim-title';
  $handler->display->display_options['fields']['colorbox']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['colorbox']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['colorbox']['trigger_field'] = 'title';
  $handler->display->display_options['fields']['colorbox']['popup'] = '<span class="video_block-title">[title]</span></br>
<div class="video_size">[field_upload_video]</div>
<p class="video_description">[body]</p>
<span class="modify-links">[delete_node] — [edit_node]</span>';
  $handler->display->display_options['fields']['colorbox']['gid'] = 0;
  $handler->display->display_options['fields']['colorbox']['width'] = '500';
  $handler->display->display_options['fields']['colorbox']['height'] = '500';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['label'] = '';
  $handler->display->display_options['fields']['body_1']['element_class'] = 'video_description-trim';
  $handler->display->display_options['fields']['body_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body_1']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body_1']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node_1']['id'] = 'edit_node_1';
  $handler->display->display_options['fields']['edit_node_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node_1']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node_1']['label'] = '';
  $handler->display->display_options['fields']['edit_node_1']['element_class'] = 'modify-links';
  $handler->display->display_options['fields']['edit_node_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node_1']['text'] = 'Edit Video';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node_1']['id'] = 'delete_node_1';
  $handler->display->display_options['fields']['delete_node_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node_1']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node_1']['label'] = '';
  $handler->display->display_options['fields']['delete_node_1']['element_class'] = 'modify-links';
  $handler->display->display_options['fields']['delete_node_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['delete_node_1']['text'] = 'Delete Video';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'add_new_video' => 'add_new_video',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['operator'] = 'not';
  $handler->display->display_options['filters']['tid']['value'] = array(
    19 => '19',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'video_tags';
  $handler->display->display_options['filters']['tid']['hierarchy'] = 1;

  /* Display: Sunday Video Block (Left Column) */
  $handler = $view->new_display('block', 'Sunday Video Block (Left Column)', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Watch Last Sunday';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'video_row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'delete_node' => 'delete_node',
    'edit_node' => 'edit_node',
    'edit_node_1' => 'edit_node_1',
    'delete_node_1' => 'delete_node_1',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Post Date */
  $handler->display->display_options['fields']['field_post_date_1']['id'] = 'field_post_date_1';
  $handler->display->display_options['fields']['field_post_date_1']['table'] = 'field_data_field_post_date';
  $handler->display->display_options['fields']['field_post_date_1']['field'] = 'field_post_date';
  $handler->display->display_options['fields']['field_post_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_post_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_post_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_post_date_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_post_date_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Upload Video */
  $handler->display->display_options['fields']['field_upload_video']['id'] = 'field_upload_video';
  $handler->display->display_options['fields']['field_upload_video']['table'] = 'field_data_field_upload_video';
  $handler->display->display_options['fields']['field_upload_video']['field'] = 'field_upload_video';
  $handler->display->display_options['fields']['field_upload_video']['label'] = '';
  $handler->display->display_options['fields']['field_upload_video']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_upload_video']['alter']['text'] = '[field_image]';
  $handler->display->display_options['fields']['field_upload_video']['element_class'] = 'video_size';
  $handler->display->display_options['fields']['field_upload_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_upload_video']['element_default_classes'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['label'] = '';
  $handler->display->display_options['fields']['body_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_1']['element_default_classes'] = FALSE;
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delete_node']['element_class'] = 'modify-links';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = 'Delete Video';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_class'] = 'modify-links';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Video';
  /* Field: Colorbox: Colorbox trigger */
  $handler->display->display_options['fields']['colorbox']['id'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['table'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['field'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['label'] = '';
  $handler->display->display_options['fields']['colorbox']['element_class'] = 'sunday_trim-title';
  $handler->display->display_options['fields']['colorbox']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['colorbox']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['colorbox']['trigger_field'] = 'title';
  $handler->display->display_options['fields']['colorbox']['popup'] = '<span class="video_block-title">[title]</span></br>
<span class="event_full-dates">[field_post_date_1]</span></br>
<div class="video_size">[field_upload_video]</div>
<p class="sunday_full-body">[body_1]</p>
<span class="modify-links">[delete_node] — [edit_node]</span>';
  $handler->display->display_options['fields']['colorbox']['gid'] = 0;
  $handler->display->display_options['fields']['colorbox']['width'] = '500';
  $handler->display->display_options['fields']['colorbox']['height'] = '500';
  /* Field: Content: Post Date */
  $handler->display->display_options['fields']['field_post_date']['id'] = 'field_post_date';
  $handler->display->display_options['fields']['field_post_date']['table'] = 'field_data_field_post_date';
  $handler->display->display_options['fields']['field_post_date']['field'] = 'field_post_date';
  $handler->display->display_options['fields']['field_post_date']['label'] = '';
  $handler->display->display_options['fields']['field_post_date']['element_class'] = 'video_trim-dates';
  $handler->display->display_options['fields']['field_post_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_post_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_post_date']['settings'] = array(
    'format_type' => 'date_no_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_class'] = 'sunday_trim-body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '280',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node_1']['id'] = 'edit_node_1';
  $handler->display->display_options['fields']['edit_node_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node_1']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node_1']['label'] = '';
  $handler->display->display_options['fields']['edit_node_1']['element_class'] = 'modify-links';
  $handler->display->display_options['fields']['edit_node_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node_1']['text'] = 'Edit Service';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'add_new_video' => 'add_new_video',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    19 => '19',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'video_tags';

  /* Display: Sunday Page (Main Page) */
  $handler = $view->new_display('block', 'Sunday Page (Main Page)', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<a href="sunday-services">Sunday Services</a>';
  $handler->display->display_options['display_description'] = 'Sunday Video Uploads';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More Video\'s';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹‹ previous 3';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'next 3 ››';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = 'video_title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Upload Video */
  $handler->display->display_options['fields']['field_upload_video']['id'] = 'field_upload_video';
  $handler->display->display_options['fields']['field_upload_video']['table'] = 'field_data_field_upload_video';
  $handler->display->display_options['fields']['field_upload_video']['field'] = 'field_upload_video';
  $handler->display->display_options['fields']['field_upload_video']['label'] = '';
  $handler->display->display_options['fields']['field_upload_video']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_upload_video']['element_class'] = 'video_upload';
  $handler->display->display_options['fields']['field_upload_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_upload_video']['element_default_classes'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_wrapper_class'] = 'sunday_full-dates';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'date_no_time';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_class'] = 'video_description';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_class'] = 'modify-links';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = 'Delete Video';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_class'] = 'modify-links';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Video';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'add_new_video' => 'add_new_video',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    19 => '19',
  );
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'video_tags';
  $handler->display->display_options['filters']['tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Post Date (field_post_date) */
  $handler->display->display_options['filters']['field_post_date_value']['id'] = 'field_post_date_value';
  $handler->display->display_options['filters']['field_post_date_value']['table'] = 'field_data_field_post_date';
  $handler->display->display_options['filters']['field_post_date_value']['field'] = 'field_post_date_value';
  $handler->display->display_options['filters']['field_post_date_value']['group'] = 2;
  $handler->display->display_options['filters']['field_post_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_post_date_value']['expose']['operator_id'] = 'field_post_date_value_op';
  $handler->display->display_options['filters']['field_post_date_value']['expose']['label'] = 'Sunday Service Lookup';
  $handler->display->display_options['filters']['field_post_date_value']['expose']['description'] = 'Lookup a Sunday Service';
  $handler->display->display_options['filters']['field_post_date_value']['expose']['operator'] = 'field_post_date_value_op';
  $handler->display->display_options['filters']['field_post_date_value']['expose']['identifier'] = 'field_post_date_value';
  $handler->display->display_options['filters']['field_post_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_post_date_value']['group_info']['label'] = 'Post Date (field_post_date)';
  $handler->display->display_options['filters']['field_post_date_value']['group_info']['identifier'] = 'field_post_date_value';
  $handler->display->display_options['filters']['field_post_date_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_post_date_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );

  /* Display: Sunday Page (Archive Page) */
  $handler = $view->new_display('block', 'Sunday Page (Archive Page)', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<a href="sunday-services">Sunday Services</a>';
  $handler->display->display_options['display_description'] = 'Sunday Video Uploads';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More Video\'s';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'video_row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'delete_node' => 'delete_node',
    'edit_node' => 'edit_node',
    'delete_node_1' => 'delete_node_1',
    'edit_node_1' => 'edit_node_1',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = 'video_title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Post Date */
  $handler->display->display_options['fields']['field_post_date_1']['id'] = 'field_post_date_1';
  $handler->display->display_options['fields']['field_post_date_1']['table'] = 'field_data_field_post_date';
  $handler->display->display_options['fields']['field_post_date_1']['field'] = 'field_post_date';
  $handler->display->display_options['fields']['field_post_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_post_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_post_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_post_date_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_post_date_1']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Upload Video */
  $handler->display->display_options['fields']['field_upload_video']['id'] = 'field_upload_video';
  $handler->display->display_options['fields']['field_upload_video']['table'] = 'field_data_field_upload_video';
  $handler->display->display_options['fields']['field_upload_video']['field'] = 'field_upload_video';
  $handler->display->display_options['fields']['field_upload_video']['label'] = '';
  $handler->display->display_options['fields']['field_upload_video']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_upload_video']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_upload_video']['element_class'] = 'video_upload';
  $handler->display->display_options['fields']['field_upload_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_upload_video']['element_default_classes'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_class'] = 'video_description';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delete_node']['element_class'] = 'modify-links';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = 'Delete Video';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_class'] = 'modify-links';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Video';
  /* Field: Colorbox: Colorbox trigger */
  $handler->display->display_options['fields']['colorbox']['id'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['table'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['field'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['label'] = '';
  $handler->display->display_options['fields']['colorbox']['element_class'] = 'archive_title';
  $handler->display->display_options['fields']['colorbox']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['colorbox']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['colorbox']['trigger_field'] = 'title';
  $handler->display->display_options['fields']['colorbox']['popup'] = '<span class=video_block-title">[title]</span>
<span class="archive_date">[field_post_date_1]</span>
<div class="video_size">[field_upload_video]</div>
<p class="sunday_full-body">[body]</p>
<span class="modify-links">[delete_node] — [edit_node]</span>';
  $handler->display->display_options['fields']['colorbox']['gid'] = 1;
  $handler->display->display_options['fields']['colorbox']['width'] = '550';
  $handler->display->display_options['fields']['colorbox']['height'] = '500';
  /* Field: Content: Post Date */
  $handler->display->display_options['fields']['field_post_date']['id'] = 'field_post_date';
  $handler->display->display_options['fields']['field_post_date']['table'] = 'field_data_field_post_date';
  $handler->display->display_options['fields']['field_post_date']['field'] = 'field_post_date';
  $handler->display->display_options['fields']['field_post_date']['label'] = '';
  $handler->display->display_options['fields']['field_post_date']['element_class'] = 'archive_date';
  $handler->display->display_options['fields']['field_post_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_post_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_post_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['label'] = '';
  $handler->display->display_options['fields']['body_1']['element_class'] = 'archive_body-trim';
  $handler->display->display_options['fields']['body_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body_1']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body_1']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node_1']['id'] = 'delete_node_1';
  $handler->display->display_options['fields']['delete_node_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node_1']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node_1']['label'] = '';
  $handler->display->display_options['fields']['delete_node_1']['element_class'] = 'modify-links';
  $handler->display->display_options['fields']['delete_node_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['delete_node_1']['text'] = 'Delete Service';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node_1']['id'] = 'edit_node_1';
  $handler->display->display_options['fields']['edit_node_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node_1']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node_1']['label'] = '';
  $handler->display->display_options['fields']['edit_node_1']['element_class'] = 'modify-links';
  $handler->display->display_options['fields']['edit_node_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node_1']['text'] = 'Edit Service';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'add_new_video' => 'add_new_video',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    19 => '19',
  );
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'video_tags';
  $handler->display->display_options['filters']['tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Post Date (field_post_date) */
  $handler->display->display_options['filters']['field_post_date_value']['id'] = 'field_post_date_value';
  $handler->display->display_options['filters']['field_post_date_value']['table'] = 'field_data_field_post_date';
  $handler->display->display_options['filters']['field_post_date_value']['field'] = 'field_post_date_value';
  $handler->display->display_options['filters']['field_post_date_value']['group'] = 2;
  $handler->display->display_options['filters']['field_post_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_post_date_value']['expose']['operator_id'] = 'field_post_date_value_op';
  $handler->display->display_options['filters']['field_post_date_value']['expose']['label'] = 'Sunday Service Lookup';
  $handler->display->display_options['filters']['field_post_date_value']['expose']['description'] = 'Lookup a Sunday Service';
  $handler->display->display_options['filters']['field_post_date_value']['expose']['operator'] = 'field_post_date_value_op';
  $handler->display->display_options['filters']['field_post_date_value']['expose']['identifier'] = 'field_post_date_value';
  $handler->display->display_options['filters']['field_post_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_post_date_value']['group_info']['label'] = 'Post Date (field_post_date)';
  $handler->display->display_options['filters']['field_post_date_value']['group_info']['identifier'] = 'field_post_date_value';
  $handler->display->display_options['filters']['field_post_date_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_post_date_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );

  /* Display: Video Page (Archive Page) */
  $handler = $view->new_display('block', 'Video Page (Archive Page)', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<a href="videos">Video Archives</a>';
  $handler->display->display_options['display_description'] = 'Sunday Video Uploads';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More Video\'s';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'video_row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'delete_node' => 'delete_node',
    'edit_node' => 'edit_node',
    'delete_node_1' => 'delete_node_1',
    'edit_node_1' => 'edit_node_1',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = 'video_title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Post Date */
  $handler->display->display_options['fields']['field_post_date_1']['id'] = 'field_post_date_1';
  $handler->display->display_options['fields']['field_post_date_1']['table'] = 'field_data_field_post_date';
  $handler->display->display_options['fields']['field_post_date_1']['field'] = 'field_post_date';
  $handler->display->display_options['fields']['field_post_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_post_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_post_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_post_date_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_post_date_1']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Upload Video */
  $handler->display->display_options['fields']['field_upload_video']['id'] = 'field_upload_video';
  $handler->display->display_options['fields']['field_upload_video']['table'] = 'field_data_field_upload_video';
  $handler->display->display_options['fields']['field_upload_video']['field'] = 'field_upload_video';
  $handler->display->display_options['fields']['field_upload_video']['label'] = '';
  $handler->display->display_options['fields']['field_upload_video']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_upload_video']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_upload_video']['element_class'] = 'video_upload';
  $handler->display->display_options['fields']['field_upload_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_upload_video']['element_default_classes'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_class'] = 'video_description';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delete_node']['element_class'] = 'modify-links';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = 'Delete Video';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_class'] = 'modify-links';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Video';
  /* Field: Colorbox: Colorbox trigger */
  $handler->display->display_options['fields']['colorbox']['id'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['table'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['field'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['label'] = '';
  $handler->display->display_options['fields']['colorbox']['element_class'] = 'archive_title';
  $handler->display->display_options['fields']['colorbox']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['colorbox']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['colorbox']['trigger_field'] = 'title';
  $handler->display->display_options['fields']['colorbox']['popup'] = '<span class=video_block-title">[title]</span>
<span class="archive_date">[field_post_date_1]</span>
<div class="video_size">[field_upload_video]</div>
<p class="sunday_full-body">[body]</p>
<span class="modify-links">[delete_node] — [edit_node]</span>';
  $handler->display->display_options['fields']['colorbox']['gid'] = 1;
  $handler->display->display_options['fields']['colorbox']['width'] = '550';
  $handler->display->display_options['fields']['colorbox']['height'] = '500';
  /* Field: Content: Post Date */
  $handler->display->display_options['fields']['field_post_date']['id'] = 'field_post_date';
  $handler->display->display_options['fields']['field_post_date']['table'] = 'field_data_field_post_date';
  $handler->display->display_options['fields']['field_post_date']['field'] = 'field_post_date';
  $handler->display->display_options['fields']['field_post_date']['label'] = '';
  $handler->display->display_options['fields']['field_post_date']['element_class'] = 'archive_date';
  $handler->display->display_options['fields']['field_post_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_post_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_post_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['label'] = '';
  $handler->display->display_options['fields']['body_1']['element_class'] = 'archive_body-trim';
  $handler->display->display_options['fields']['body_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body_1']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body_1']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node_1']['id'] = 'delete_node_1';
  $handler->display->display_options['fields']['delete_node_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node_1']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node_1']['label'] = '';
  $handler->display->display_options['fields']['delete_node_1']['element_class'] = 'modify-links';
  $handler->display->display_options['fields']['delete_node_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['delete_node_1']['text'] = 'Delete Service';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node_1']['id'] = 'edit_node_1';
  $handler->display->display_options['fields']['edit_node_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node_1']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node_1']['label'] = '';
  $handler->display->display_options['fields']['edit_node_1']['element_class'] = 'modify-links';
  $handler->display->display_options['fields']['edit_node_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node_1']['text'] = 'Edit Service';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'add_new_video' => 'add_new_video',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    20 => '20',
  );
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'video_tags';
  $handler->display->display_options['filters']['tid']['hierarchy'] = 1;
  $export['video_gallery'] = $view;

  return $export;
}
