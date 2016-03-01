/*
    This file is part of telegram-client.

    Telegram-client is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 2 of the License, or
    (at your option) any later version.

    Telegram-client is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this telegram-client.  If not, see <http://www.gnu.org/licenses/>.

    Copyright Vitaly Valtman 2013
*/
#ifndef CONSTANTS_H
#define CONSTANTS_H
#define CODE_int 0xa8509bda
#define CODE_long 0x22076cba
#define CODE_double 0x2210c154
#define CODE_string 0xb5286e24
#define CODE_bytes 0x0ee1379f
#define CODE_int128 0x7d36c439
#define CODE_int256 0xf2c798b3
#define CODE_bool_false 0xbc799737
#define CODE_bool_true 0x997275b5
#define CODE_vector 0x1cb5c415
#define CODE_error 0xc4b9f9bb
#define CODE_null 0x56730bcc
#define CODE_input_peer_empty 0x7f3b18ea
#define CODE_input_peer_self 0x7da07ec9
#define CODE_input_peer_contact 0x1023dbe8
#define CODE_input_peer_foreign 0x9b447325
#define CODE_input_peer_chat 0x179be863
#define CODE_input_user_empty 0xb98886cf
#define CODE_input_user_self 0xf7c1b13f
#define CODE_input_user_contact 0x86e94f65
#define CODE_input_user_foreign 0x655e74ff
#define CODE_input_phone_contact 0xf392b7f4
#define CODE_input_file 0xf52ff27f
#define CODE_input_media_empty 0x9664f57f
#define CODE_input_media_uploaded_photo 0xf7aff1c0
#define CODE_input_media_photo 0xe9bfb4f3
#define CODE_input_media_geo_point 0xf9c44144
#define CODE_input_media_contact 0xa6e45987
#define CODE_input_media_uploaded_video 0xe13fd4bc
#define CODE_input_media_uploaded_thumb_video 0x96fb97dc
#define CODE_input_media_video 0x936a4ebd
#define CODE_input_chat_photo_empty 0x1ca48f57
#define CODE_input_chat_uploaded_photo 0x94254732
#define CODE_input_chat_photo 0xb2e1bf08
#define CODE_input_geo_point_empty 0xe4c123d6
#define CODE_input_geo_point 0xf3b7acc9
#define CODE_input_photo_empty 0x1cd7bf0d
#define CODE_input_photo 0xfb95c6c4
#define CODE_input_video_empty 0x5508ec75
#define CODE_input_video 0xee579652
#define CODE_input_file_location 0x14637196
#define CODE_input_video_file_location 0x3d0364ec
#define CODE_input_photo_crop_auto 0xade6b004
#define CODE_input_photo_crop 0xd9915325
#define CODE_input_app_event 0x770656a8
#define CODE_peer_user 0x9db1bc6d
#define CODE_peer_chat 0xbad0e5bb
#define CODE_storage_file_unknown 0xaa963b05
#define CODE_storage_file_jpeg 0x007efe0e
#define CODE_storage_file_gif 0xcae1aadf
#define CODE_storage_file_png 0x0a4f63c0
#define CODE_storage_file_pdf 0xae1e508d
#define CODE_storage_file_mp3 0x528a0677
#define CODE_storage_file_mov 0x4b09ebbc
#define CODE_storage_file_partial 0x40bc6f52
#define CODE_storage_file_mp4 0xb3cea0e4
#define CODE_storage_file_webp 0x1081464c
#define CODE_file_location_unavailable 0x7c596b46
#define CODE_file_location 0x53d69076
#define CODE_user_empty 0x200250ba
#define CODE_user_profile_photo_empty 0x4f11bae1
#define CODE_user_profile_photo 0xd559d8c8
#define CODE_user_status_empty 0x09d05049
#define CODE_user_status_online 0xedb93949
#define CODE_user_status_offline 0x008c703f
#define CODE_chat_empty 0x9ba2d800
#define CODE_chat 0x6e9c9bc7
#define CODE_chat_forbidden 0xfb0ccc41
#define CODE_chat_full 0x2e02a614
#define CODE_chat_participant 0xc8d7493e
#define CODE_chat_participants_forbidden 0x0fd2bb8a
#define CODE_chat_participants 0x7841b415
#define CODE_chat_photo_empty 0x37c1011c
#define CODE_chat_photo 0x6153276a
#define CODE_message_empty 0x83e5de54
#define CODE_message 0xc3060325
#define CODE_message_service 0x1d86f70e
#define CODE_message_media_empty 0x3ded6320
#define CODE_message_media_photo 0x3d8ce53d
#define CODE_message_media_video 0x5bcf1675
#define CODE_message_media_geo 0x56e0d474
#define CODE_message_media_contact 0x5e7d2f39
#define CODE_message_media_unsupported 0x9f84f49e
#define CODE_message_media_unsupportedl22 0x29632a36
#define CODE_message_action_empty 0xb6aef7b0
#define CODE_message_action_chat_create 0xa6638b9a
#define CODE_message_action_chat_edit_title 0xb5a1ce5a
#define CODE_message_action_chat_edit_photo 0x7fcb13a8
#define CODE_message_action_chat_delete_photo 0x95e3fbef
#define CODE_message_action_chat_add_user 0x5e3cfc4b
#define CODE_message_action_chat_delete_user 0xb2ae9b0c
#define CODE_dialog 0xc1dd804a
#define CODE_photo_empty 0x2331b22d
#define CODE_photo 0xc3838076
#define CODE_photo_l27 0x22b56751
#define CODE_photo_size_empty 0x0e17e23c
#define CODE_photo_size 0x77bfb61b
#define CODE_photo_cached_size 0xe9a734fa
#define CODE_video_empty 0xc10658a8
#define CODE_video 0xee9f4a4d
#define CODE_video_l27 0x388fa391
#define CODE_geo_point_empty 0x1117dd5f
#define CODE_geo_point 0x2049d70c
#define CODE_auth_checked_phone 0x811ea28e
#define CODE_auth_sent_code 0xefed51d9
#define CODE_auth_authorization 0xff036af1
#define CODE_auth_exported_authorization 0xdf969c2d
#define CODE_input_notify_peer 0xb8bc5b0c
#define CODE_input_notify_users 0x193b4417
#define CODE_input_notify_chats 0x4a95e84e
#define CODE_input_notify_all 0xa429b886
#define CODE_input_peer_notify_events_empty 0xf03064d8
#define CODE_input_peer_notify_events_all 0xe86a2c74
#define CODE_input_peer_notify_settings 0x46a2ce98
#define CODE_peer_notify_events_empty 0xadd53cb3
#define CODE_peer_notify_events_all 0x6d1ded88
#define CODE_peer_notify_settings_empty 0x70a68512
#define CODE_peer_notify_settings 0x8d5e11ee
#define CODE_wall_paper 0xccb03657
#define CODE_user_full 0x5a89ac5b
#define CODE_contact 0xf911c994
#define CODE_imported_contact 0xd0028438
#define CODE_contact_blocked 0x561bc879
#define CODE_contact_suggested 0x3de191a1
#define CODE_contact_status 0xd3680c61
#define CODE_chat_located 0x3631cf4c
#define CODE_contacts_link 0x3ace484c
#define CODE_contacts_contacts_not_modified 0xb74ba9d2
#define CODE_contacts_contacts 0x6f8b8cb2
#define CODE_contacts_imported_contacts 0xad524315
#define CODE_contacts_blocked 0x1c138d15
#define CODE_contacts_blocked_slice 0x900802a1
#define CODE_contacts_suggested 0x5649dcc5
#define CODE_messages_dialogs 0x15ba6c40
#define CODE_messages_dialogs_slice 0x71e094f3
#define CODE_messages_messages 0x8c718e87
#define CODE_messages_messages_slice 0x0b446ae3
#define CODE_messages_message_empty 0x3f4e0648
#define CODE_messages_sent_message 0x4c3d47f3
#define CODE_messages_chats 0x64ff9fd5
#define CODE_messages_chat_full 0xe5d7d19c
#define CODE_messages_affected_history 0xb45c69d1
#define CODE_input_messages_filter_empty 0x57e2f66c
#define CODE_input_messages_filter_photos 0x9609a51c
#define CODE_input_messages_filter_video 0x9fc00e65
#define CODE_input_messages_filter_photo_video 0x56e9f0e4
#define CODE_input_messages_filter_photo_video_documents 0xd95e73bb
#define CODE_input_messages_filter_document 0x9eddf188
#define CODE_input_messages_filter_audio 0xcfc87522
#define CODE_update_new_message 0x1f2b0afd
#define CODE_update_message_i_d 0x4e90bfd6
#define CODE_update_delete_messages 0xa20db0e5
#define CODE_update_user_typing 0x5c486927
#define CODE_update_chat_user_typing 0x9a65ea1f
#define CODE_update_chat_participants 0x07761198
#define CODE_update_user_status 0x1bfbd823
#define CODE_update_user_name 0xa7332b73
#define CODE_update_user_photo 0x95313b0c
#define CODE_update_contact_registered 0x2575bbb9
#define CODE_update_contact_link 0x9d2e67c5
#define CODE_update_new_authorization 0x8f06529a
#define CODE_updates_state 0xa56c2a3e
#define CODE_updates_difference_empty 0x5d75a138
#define CODE_updates_difference 0x00f49ca0
#define CODE_updates_difference_slice 0xa8fb1981
#define CODE_updates_too_long 0xe317af7e
#define CODE_update_short_message 0xed5c2127
#define CODE_update_short_chat_message 0x52238b3c
#define CODE_update_short 0x78d4dec1
#define CODE_updates_combined 0x725b04c3
#define CODE_updates 0x74ae4240
#define CODE_photos_photos 0x8dca6aa5
#define CODE_photos_photos_slice 0x15051f54
#define CODE_photos_photo 0x20212ca8
#define CODE_upload_file 0x096a18d5
#define CODE_dc_option_l28 0x2ec2a43c
#define CODE_dc_option 0x05d8c6cc
#define CODE_config 0x4e32b894
#define CODE_nearest_dc 0x8e1a1775
#define CODE_help_app_update 0x8987f311
#define CODE_help_no_app_update 0xc45a6536
#define CODE_help_invite_text 0x18cb9f78
#define CODE_messages_sent_message_link 0x35a1a663
#define CODE_input_geo_chat 0x74d456fa
#define CODE_input_notify_geo_chat_peer 0x4d8ddec8
#define CODE_geo_chat 0x75eaea5a
#define CODE_geo_chat_message_empty 0x60311a9b
#define CODE_geo_chat_message 0x4505f8e1
#define CODE_geo_chat_message_service 0xd34fa24e
#define CODE_geochats_stated_message 0x17b1578b
#define CODE_geochats_located 0x48feb267
#define CODE_geochats_messages 0xd1526db1
#define CODE_geochats_messages_slice 0xbc5863e8
#define CODE_message_action_geo_chat_create 0x6f038ebc
#define CODE_message_action_geo_chat_checkin 0x0c7d53de
#define CODE_update_new_geo_chat_message 0x5a68e3f7
#define CODE_wall_paper_solid 0x63117f24
#define CODE_update_new_encrypted_message 0x12bcbd9a
#define CODE_update_encrypted_chat_typing 0x1710f156
#define CODE_update_encryption 0xb4a2e88d
#define CODE_update_encrypted_messages_read 0x38fe25b7
#define CODE_encrypted_chat_empty 0xab7ec0a0
#define CODE_encrypted_chat_waiting 0x3bf703dc
#define CODE_encrypted_chat_requested 0xc878527e
#define CODE_encrypted_chat 0xfa56ce36
#define CODE_encrypted_chat_discarded 0x13d6dd27
#define CODE_input_encrypted_chat 0xf141b5e1
#define CODE_encrypted_file_empty 0xc21f497e
#define CODE_encrypted_file 0x4a70994c
#define CODE_input_encrypted_file_empty 0x1837c364
#define CODE_input_encrypted_file_uploaded 0x64bd0306
#define CODE_input_encrypted_file 0x5a17b5e5
#define CODE_input_encrypted_file_location 0xf5235d55
#define CODE_encrypted_message 0xed18c118
#define CODE_encrypted_message_service 0x23734b06
#define CODE_messages_dh_config_not_modified 0xc0e24635
#define CODE_messages_dh_config 0x2c221edd
#define CODE_messages_sent_encrypted_message 0x560f8935
#define CODE_messages_sent_encrypted_file 0x9493ff32
#define CODE_input_file_big 0xfa4f0bb5
#define CODE_input_encrypted_file_big_uploaded 0x2dc173c8
#define CODE_update_chat_participant_add 0x3a0eeb22
#define CODE_update_chat_participant_delete 0x6e5f8c22
#define CODE_update_dc_options 0x8e5e9873
#define CODE_input_media_uploaded_audio 0x4e498cab
#define CODE_input_media_audio 0x89938781
#define CODE_input_media_uploaded_document 0xffe76b78
#define CODE_input_media_uploaded_thumb_document 0x41481486
#define CODE_input_media_document 0xd184e841
#define CODE_message_media_document 0x2fda2204
#define CODE_message_media_audio 0xc6b68300
#define CODE_input_audio_empty 0xd95adc84
#define CODE_input_audio 0x77d440ff
#define CODE_input_document_empty 0x72f0eaae
#define CODE_input_document 0x18798952
#define CODE_input_audio_file_location 0x74dc404d
#define CODE_input_document_file_location 0x4e45abe9
#define CODE_audio_empty 0x586988d8
#define CODE_audio 0xc7ac6496
#define CODE_document_empty 0x36f8c871
#define CODE_document 0xf9a39f4f
#define CODE_document_l19 0x9efc6326
#define CODE_help_support 0x17c6b5f6
#define CODE_notify_peer 0x9fd40bd8
#define CODE_notify_users 0xb4c83b4c
#define CODE_notify_chats 0xc007cec3
#define CODE_notify_all 0x74d07c60
#define CODE_update_user_blocked 0x80ece81a
#define CODE_update_notify_settings 0xbec268ef
#define CODE_auth_sent_app_code 0xe325edcf
#define CODE_send_message_typing_action 0x16bf744e
#define CODE_send_message_cancel_action 0xfd5ec8f5
#define CODE_send_message_record_video_action 0xa187d66f
#define CODE_send_message_upload_video_action_l27 0x92042ff7
#define CODE_send_message_upload_video_action 0xe9763aec
#define CODE_send_message_record_audio_action 0xd52f73f7
#define CODE_send_message_upload_audio_action_l27 0xe6ac8a6f
#define CODE_send_message_upload_audio_action 0xf351d7ab
#define CODE_send_message_upload_photo_action 0xd1d34a26
#define CODE_send_message_upload_document_action_l27 0x8faee98e
#define CODE_send_message_upload_document_action 0xaa0cd9e4
#define CODE_send_message_geo_location_action 0x176f8ba1
#define CODE_send_message_choose_contact_action 0x628cbc6f
#define CODE_contact_found 0xea879f95
#define CODE_contacts_found 0x0566000e
#define CODE_update_service_notification 0x382dd3e4
#define CODE_user_status_recently 0xe26f42f1
#define CODE_user_status_last_week 0x07bf09fc
#define CODE_user_status_last_month 0x77ebc742
#define CODE_update_privacy 0xee3b272a
#define CODE_input_privacy_key_status_timestamp 0x4f96cb18
#define CODE_privacy_key_status_timestamp 0xbc2eab30
#define CODE_input_privacy_value_allow_contacts 0x0d09e07b
#define CODE_input_privacy_value_allow_all 0x184b35ce
#define CODE_input_privacy_value_allow_users 0x131cc67f
#define CODE_input_privacy_value_disallow_contacts 0x0ba52007
#define CODE_input_privacy_value_disallow_all 0xd66b66c9
#define CODE_input_privacy_value_disallow_users 0x90110467
#define CODE_privacy_value_allow_contacts 0xfffe1bac
#define CODE_privacy_value_allow_all 0x65427b82
#define CODE_privacy_value_allow_users 0x4d5bbe0c
#define CODE_privacy_value_disallow_contacts 0xf888fa1a
#define CODE_privacy_value_disallow_all 0x8b73e763
#define CODE_privacy_value_disallow_users 0x0c7f49b7
#define CODE_account_privacy_rules 0x554abb6f
#define CODE_account_days_t_t_l 0xb8d0afdf
#define CODE_account_sent_change_phone_code 0xa4f58c4c
#define CODE_update_user_phone 0x12b9417b
#define CODE_document_attribute_image_size 0x6c37c15c
#define CODE_document_attribute_animated 0x11b58939
#define CODE_document_attribute_sticker_l28 0x994c9882
#define CODE_document_attribute_sticker 0x3a556302
#define CODE_document_attribute_video 0x5910cccb
#define CODE_document_attribute_audio 0x051448e5
#define CODE_document_attribute_filename 0x15590068
#define CODE_messages_stickers_not_modified 0xf1749a22
#define CODE_messages_stickers 0x8a8ecd32
#define CODE_sticker_pack 0x12b299d4
#define CODE_messages_all_stickers_not_modified 0xe86602c3
#define CODE_messages_all_stickers 0x5ce352ec
#define CODE_disabled_feature 0xae636f24
#define CODE_update_read_history_inbox 0x9961fd5c
#define CODE_update_read_history_outbox 0x2f2f21bf
#define CODE_messages_affected_messages 0x84d19185
#define CODE_contact_link_unknown 0x5f4f9247
#define CODE_contact_link_none 0xfeedd3ad
#define CODE_contact_link_has_phone 0x268f3f59
#define CODE_contact_link_contact 0xd502c2d0
#define CODE_update_web_page 0x2cc36971
#define CODE_web_page_empty 0xeb1477e8
#define CODE_web_page_pending 0xc586da1c
#define CODE_web_page 0xa31ea0b5
#define CODE_message_media_web_page 0xa32dd600
#define CODE_authorization 0x7bf2e6f6
#define CODE_account_authorizations 0x1250abde
#define CODE_account_no_password 0x96dabc18
#define CODE_account_password 0x7c18141c
#define CODE_account_password_settings 0xb7b72ab3
#define CODE_account_password_input_settings 0xbcfc532c
#define CODE_auth_password_recovery 0x137948a5
#define CODE_input_media_venue 0x2827a81a
#define CODE_message_media_venue 0x7912b71f
#define CODE_received_notify_message 0xa384b779
#define CODE_chat_invite_empty 0x69df3769
#define CODE_chat_invite_exported 0xfc2e05bc
#define CODE_chat_invite_already 0x5a686d7c
#define CODE_chat_invite 0xce917dcd
#define CODE_message_action_chat_joined_by_link 0xf89cf5e8
#define CODE_update_read_messages_contents 0x68c13933
#define CODE_input_sticker_set_empty 0xffb62b95
#define CODE_input_sticker_set_i_d 0x9de7a269
#define CODE_input_sticker_set_short_name 0x861cc8a0
#define CODE_sticker_set 0xa7a43b17
#define CODE_messages_sticker_set 0xb60a24a6
#define CODE_user 0x22e49072
#define CODE_bot_command 0xc27ac8c7
#define CODE_bot_command_old 0xb79d22ab
#define CODE_bot_info_empty 0xbb2e37ce
#define CODE_bot_info 0x09cf585d
#define CODE_keyboard_button 0xa2fa4880
#define CODE_keyboard_button_row 0x77608b83
#define CODE_reply_keyboard_hide 0xa03e5b85
#define CODE_reply_keyboard_force_reply 0xf4108aa0
#define CODE_reply_keyboard_markup 0x3502758c
#define CODE_invoke_after_msg 0xcb9f372d
#define CODE_invoke_after_msgs 0x3dc4b4f0
#define CODE_auth_check_phone 0x6fe51dfb
#define CODE_auth_send_code 0x768d5f4d
#define CODE_auth_send_call 0x03c51564
#define CODE_auth_sign_up 0x1b067634
#define CODE_auth_sign_in 0xbcd51581
#define CODE_auth_log_out 0x5717da40
#define CODE_auth_reset_authorizations 0x9fab0d1a
#define CODE_auth_send_invites 0x771c1d97
#define CODE_auth_export_authorization 0xe5bfffcd
#define CODE_auth_import_authorization 0xe3ef9613
#define CODE_auth_bind_temp_auth_key 0xcdd42a05
#define CODE_account_register_device 0x446c712c
#define CODE_account_unregister_device 0x65c55b40
#define CODE_account_update_notify_settings 0x84be5b93
#define CODE_account_get_notify_settings 0x12b3ad31
#define CODE_account_reset_notify_settings 0xdb7e1747
#define CODE_account_update_profile 0xf0888d68
#define CODE_account_update_status 0x6628562c
#define CODE_account_get_wall_papers 0xc04cfac2
#define CODE_users_get_users 0x0d91a548
#define CODE_users_get_full_user 0xca30a5b1
#define CODE_contacts_get_statuses 0xc4a353ee
#define CODE_contacts_get_contacts 0x22c6aa08
#define CODE_contacts_import_contacts 0xda30b32d
#define CODE_contacts_get_suggested 0xcd773428
#define CODE_contacts_delete_contact 0x8e953744
#define CODE_contacts_delete_contacts 0x59ab389e
#define CODE_contacts_block 0x332b49fc
#define CODE_contacts_unblock 0xe54100bd
#define CODE_contacts_get_blocked 0xf57c350f
#define CODE_contacts_export_card 0x84e53737
#define CODE_contacts_import_card 0x4fe196fe
#define CODE_messages_get_messages 0x4222fa74
#define CODE_messages_get_dialogs 0xeccf1df6
#define CODE_messages_get_history 0x92a1df2f
#define CODE_messages_search 0x07e9f2ab
#define CODE_messages_read_history 0xb04f2510
#define CODE_messages_delete_history 0xf4f8fb61
#define CODE_messages_delete_messages 0xa5f18925
#define CODE_messages_received_messages 0x05a954c0
#define CODE_messages_set_typing 0xa3825e50
#define CODE_messages_send_message 0xfc55e6b5
#define CODE_messages_send_media 0xc8f16791
#define CODE_messages_forward_messages 0x55e1728d
#define CODE_messages_get_chats 0x3c6aa187
#define CODE_messages_get_full_chat 0x3b831c66
#define CODE_messages_edit_chat_title 0xdc452855
#define CODE_messages_edit_chat_photo 0xca4c79d8
#define CODE_messages_add_chat_user 0xf9a0aa09
#define CODE_messages_delete_chat_user 0xe0611f16
#define CODE_messages_create_chat 0x09cb126e
#define CODE_updates_get_state 0xedd4882a
#define CODE_updates_get_difference 0x0a041495
#define CODE_photos_update_profile_photo 0xeef579a0
#define CODE_photos_upload_profile_photo 0xd50f9c88
#define CODE_photos_delete_photos 0x87cf7f2f
#define CODE_upload_save_file_part 0xb304a621
#define CODE_upload_get_file 0xe3a6cfb5
#define CODE_help_get_config 0xc4f9186b
#define CODE_help_get_nearest_dc 0x1fb33026
#define CODE_help_get_app_update 0xc812ac7e
#define CODE_help_save_app_log 0x6f02f748
#define CODE_help_get_invite_text 0xa4a95186
#define CODE_photos_get_user_photos 0xb7ee553c
#define CODE_messages_forward_message 0x33963bf9
#define CODE_messages_send_broadcast 0xbf73f4da
#define CODE_geochats_get_located 0x7f192d8f
#define CODE_geochats_get_recents 0xe1427e6f
#define CODE_geochats_checkin 0x55b3e8fb
#define CODE_geochats_get_full_chat 0x6722dd6f
#define CODE_geochats_edit_chat_title 0x4c8e2273
#define CODE_geochats_edit_chat_photo 0x35d81a95
#define CODE_geochats_search 0xcfcdc44d
#define CODE_geochats_get_history 0xb53f7a68
#define CODE_geochats_set_typing 0x08b8a729
#define CODE_geochats_send_message 0x061b0044
#define CODE_geochats_send_media 0xb8f0deff
#define CODE_geochats_create_geo_chat 0x0e092e16
#define CODE_messages_get_dh_config 0x26cf8950
#define CODE_messages_request_encryption 0xf64daf43
#define CODE_messages_accept_encryption 0x3dbc0415
#define CODE_messages_discard_encryption 0xedd923c5
#define CODE_messages_set_encrypted_typing 0x791451ed
#define CODE_messages_read_encrypted_history 0x7f4b690a
#define CODE_messages_send_encrypted 0xa9776773
#define CODE_messages_send_encrypted_file 0x9a901b66
#define CODE_messages_send_encrypted_service 0x32d439a4
#define CODE_messages_received_queue 0x55a5bb66
#define CODE_upload_save_big_file_part 0xde7b673d
#define CODE_init_connection 0x69796de9
#define CODE_help_get_support 0x9cdf08cd
#define CODE_auth_send_sms 0x0da9f3e8
#define CODE_messages_read_message_contents 0x36a73f77
#define CODE_account_check_username 0x2714d86c
#define CODE_account_update_username 0x3e0bdd7c
#define CODE_contacts_search 0x11f812d8
#define CODE_account_get_privacy 0xdadbc950
#define CODE_account_set_privacy 0xc9f81ce8
#define CODE_account_delete_account 0x418d4e0b
#define CODE_account_get_account_t_t_l 0x08fc711d
#define CODE_account_set_account_t_t_l 0x2442485e
#define CODE_invoke_with_layer 0xda9b0d0d
#define CODE_contacts_resolve_username 0x0bf0131c
#define CODE_account_send_change_phone_code 0xa407a8f4
#define CODE_account_change_phone 0x70c32edb
#define CODE_messages_get_stickers 0xae22e045
#define CODE_messages_get_all_stickers 0xaa3bc868
#define CODE_account_update_device_locked 0x38df3532
#define CODE_auth_import_bot_authorization 0x67a3ff2c
#define CODE_messages_get_web_page_preview 0x25223e24
#define CODE_account_get_authorizations 0xe320c158
#define CODE_account_reset_authorization 0xdf77f3bc
#define CODE_account_get_password 0x548a30f5
#define CODE_account_get_password_settings 0xbc8d11bb
#define CODE_account_update_password_settings 0xfa7c4b86
#define CODE_auth_check_password 0x0a63011e
#define CODE_auth_request_password_recovery 0xd897bc66
#define CODE_auth_recover_password 0x4ea56e92
#define CODE_invoke_without_updates 0xbf9459b7
#define CODE_messages_export_chat_invite 0x7d885289
#define CODE_messages_check_chat_invite 0x3eadb1bb
#define CODE_messages_import_chat_invite 0x6c50051c
#define CODE_messages_get_sticker_set 0x2619a90e
#define CODE_messages_install_sticker_set 0xefbbfae9
#define CODE_messages_uninstall_sticker_set 0xf96e55de
#define CODE_messages_start_bot 0x1b3e0ffc
#define CODE_decrypted_message_media_empty 0x089f5c4a
#define CODE_decrypted_message_media_photo 0x32798a8c
#define CODE_decrypted_message_media_geo_point 0x35480a59
#define CODE_decrypted_message_media_contact 0x588a0a97
#define CODE_decrypted_message_action_set_message_t_t_l 0xa1733aec
#define CODE_decrypted_message_media_document 0xb095434b
#define CODE_decrypted_message_action_read_messages 0x0c4f40be
#define CODE_decrypted_message_action_delete_messages 0x65614304
#define CODE_decrypted_message_action_screenshot_messages 0x8ac1f475
#define CODE_decrypted_message_action_flush_history 0x6719e45c
#define CODE_decrypted_message 0x204d3878
#define CODE_decrypted_message_service 0x73164160
#define CODE_decrypted_message_media_video 0x524a415d
#define CODE_decrypted_message_media_audio 0x57e0a9cb
#define CODE_decrypted_message_layer 0x1be31789
#define CODE_decrypted_message_action_resend 0x511110b0
#define CODE_decrypted_message_action_notify_layer 0xf3048883
#define CODE_decrypted_message_action_typing 0xccb27641
#define CODE_decrypted_message_action_request_key 0xf3c9611b
#define CODE_decrypted_message_action_accept_key 0x6fe1735b
#define CODE_decrypted_message_action_abort_key 0xdd05ec6b
#define CODE_decrypted_message_action_commit_key 0xec2e0b9b
#define CODE_decrypted_message_action_noop 0xa82fdd63
#define CODE_decrypted_message_media_external_document 0xfa95b0dd
#define CODE_binlog_encr_key 0x0377168f
#define CODE_binlog_start 0x3b06de69
#define CODE_binlog_dc_option 0xf96feb32
#define CODE_binlog_dc_option_new 0x7c0d22d8
#define CODE_binlog_auth_key 0x71e8c156
#define CODE_binlog_default_dc 0x9e83dbdc
#define CODE_binlog_dc_signed 0x26451bb5
#define CODE_binlog_our_id 0x68a870e8
#define CODE_binlog_set_dh_params 0xeaeb7826
#define CODE_binlog_set_pts 0x2ca8c939
#define CODE_binlog_set_qts 0xd95738ac
#define CODE_binlog_set_date 0x1d0f4b52
#define CODE_binlog_set_seq 0x6eeb2989
#define CODE_binlog_encr_chat_delete 0xee1b38e8
#define CODE_binlog_encr_chat_new 0x84977251
#define CODE_binlog_encr_chat_exchange_new 0x9d49488d
#define CODE_binlog_user_delete 0xac55d447
#define CODE_binlog_user_new 0x127cf2f9
#define CODE_binlog_chat_new 0x0a10aa92
#define CODE_binlog_chat_add_participant 0x535475ea
#define CODE_binlog_chat_del_participant 0x7dd1a1a2
#define CODE_binlog_set_msg_id 0x3c873416
#define CODE_binlog_message_delete 0x847e77b1
#define CODE_binlog_message_new 0x427cfcdb
#define CODE_binlog_message_encr_new 0x6cf7cabc
#define CODE_binlog_msg_update 0x6dd4d85f
#define CODE_binlog_reset_authorization 0x83327955
#define CODE_decrypted_message_media_video_l12 0x4cee6ef3
#define CODE_decrypted_message_media_audio_l12 0x6080758f
#define CODE_update_msg_update 0x03114739
#define CODE_message_media_photo_l27 0xc8c45a2a
#define CODE_message_media_video_l27 0xa2d24290
#define CODE_res_p_q 0x05162463
#define CODE_server__d_h_params_fail 0x79cb045d
#define CODE_server__d_h_params_ok 0xd0e8075c
#define CODE_p_q_inner_data 0x83c95aec
#define CODE_p_q_inner_data_temp 0x3c6a84d4
#define CODE_client__d_h_inner_data 0x6643b654
#define CODE_dh_gen_ok 0x3bcbf734
#define CODE_dh_gen_retry 0x46dc1fb9
#define CODE_dh_gen_fail 0xa69dae02
#define CODE_server__d_h_inner_data 0xb5890dba
#define CODE_req_pq 0x60469778
#define CODE_req__d_h_params 0xd712e4be
#define CODE_set_client__d_h_params 0xf5045f1f
#endif
