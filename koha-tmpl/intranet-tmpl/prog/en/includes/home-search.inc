<!-- home-search.inc -->
<div id="header_search" role="tablist">
    <div class="tab-content">
        [% IF ( CAN_user_circulate_circulate_remaining_permissions ) %]
            [% circ_active_tab = 1 %]
            [% circ_active = "active" %]
        [% ELSIF ( CAN_user_borrowers_edit_borrowers ) %]
            [% patrons_active_tab = 1 %]
            [% patrons_active = "active" %]
        [% ELSIF ( CAN_user_catalogue ) %]
            [% search_active_tab = 1 %]
            [% search_active = "active" %]
        [% END %]
        [% IF ( CAN_user_circulate_circulate_remaining_permissions ) %]
            [% INCLUDE 'patron-search-box.inc' bs_tab_active= circ_active_tab %]
            [% INCLUDE 'checkin-search-box.inc' %]
            [% INCLUDE 'renew-search-box.inc' %]
        [% END %]
        [% IF ( CAN_user_borrowers_edit_borrowers ) %]
            [% INCLUDE 'member-search-box.inc' bs_tab_active= patrons_active_tab %]
        [% END %]
        [% IF ( CAN_user_catalogue ) %]
            [% INCLUDE 'catalogue-search-box.inc' bs_tab_active= search_active_tab %]
        [% END %]
    </div><!-- /.tab-content -->
    <ul class="nav nav-tabs" role="tablist">
        [% IF ( CAN_user_circulate_circulate_remaining_permissions ) %]
            <li role="presentation" class="[% circ_active | html %]">
                <a title="Check out" href="#circ_search" aria-controls="circ_search" role="tab" aria-expanded="true" data-toggle="tab" class="keep_text"><i class="fa fa-fw fa-upload" aria-hidden="true"></i> <span class="tab-title">Check out</span></a>
            </li>
            <li role="presentation">
                <a title="Check in" href="#checkin_search" aria-controls="checkin_search" role="tab" data-toggle="tab" class="keep_text"><i class="fa fa-fw fa-download" aria-hidden="true"></i> <span class="tab-title">Check in</span></a>
            </li>
            <li role="presentation">
                <a title="Renew" href="#renew_search" aria-controls="renew_search" role="tab" data-toggle="tab" class="keep_text"><i class="fa fa-fw fa-retweet" aria-hidden="true"></i> <span class="tab-title">Renew</span></a>
            </li>
        [% END %]
        [% IF ( CAN_user_borrowers_edit_borrowers ) %]
            <li role="presentation" class="[% patrons_active | html %]">
                <a title="Search patrons" href="#patron_search" aria-controls="patron_search" role="tab" data-toggle="tab" class="keep_text"><i class="fa fa-fw fa-id-card" aria-hidden="true"></i> <span class="tab-title">Search patrons</span></a>
            </li>
        [% END %]
        [% IF ( CAN_user_catalogue ) %]
            <li role="presentation" class="[% search_active | html %]">
                <a title="Search catalog" href="#catalog_search" aria-controls="catalog_search" role="tab" data-toggle="tab" class="keep_text"><i class="fa fa-fw fa-search" aria-hidden="true"></i> <span class="tab-title">Search catalog</span></a>
            </li>
        [% END %]
    </ul>
</div><!-- /#header_search -->
<!-- /home-search.inc -->
