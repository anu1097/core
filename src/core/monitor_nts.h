//
//  monitor_nts.h
//  P2PSP
//
//  This code is distributed under the GNU General Public License (see
//  THE_GENERAL_GNU_PUBLIC_LICENSE.txt for extending this information).
//  Copyright (C) 2016, the P2PSP team.
//  http://www.p2psp.org
//
//  NTS: NAT Traversal Set of rules
//

#ifndef P2PSP_CORE_MONITOR_NTS_H
#define P2PSP_CORE_MONITOR_NTS_H

#include "peer_nts.h"
#include "../util/trace.h"

namespace p2psp {

class MonitorNTS : public PeerNTS {
 public:
  MonitorNTS();
  ~MonitorNTS();
  virtual void Init() override;
};
}

#endif  // P2PSP_CORE_MONITOR_NTS_H
