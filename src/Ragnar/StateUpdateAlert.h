#pragma once

#include "TorrentAlert.h"

namespace libtorrent
{
    struct state_update_alert;
}

namespace Ragnar
{
    using namespace System::Collections::Generic;

    ref class TorrentStatus;

    public ref class StateUpdateAlert : TorrentAlert
    {
    private:
        IList<TorrentStatus^>^ _statuses;

    internal:
        StateUpdateAlert(libtorrent::state_update_alert* alert);

    public:
        property IList<TorrentStatus^>^ Statuses { IList<TorrentStatus^>^ get() { return this->_statuses; } }
    };
}
