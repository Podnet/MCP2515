#include "mgos.h"
#include "mgos_mcp2515.h"

MCP_CAN *mgos_mcp2515_create(INT8U _CS)
{
    return new MCP_CAN(_CS);
}

INT8U mgos_mcp2515_begin(MCP_CAN *mc, INT8U speedset)
{
    if (mc == nullptr)
        return CAN_FAILINIT;
    return mc->begin(speedset);
}


INT8U mgos_mcp2515_init_Mask(MCP_CAN *mc, INT8U num, INT8U ext, INT32U ulData)
{
    if (mc == nullptr)
        return 0;
    return mc->init_Mask(num, ext, ulData);
}


INT8U mgos_mcp2515_init_Filt(MCP_CAN *mc, INT8U num, INT8U ext, INT32U ulData)
{
    if (mc == nullptr)
        return 0;
    return mc->init_Filt(num, ext, ulData);
}


INT8U mgos_mcp2515_sendMsgBuf(MCP_CAN *mc, INT32U id, INT8U ext, INT8U len, INT8U *buf)
{
    if (mc == nullptr)
        return 0;
    return mc->sendMsgBuf(id, ext, len, buf);
}


INT8U mgos_mcp2515_readMsgBuf(MCP_CAN *mc, INT8U *len, INT8U *buf)
{
    if (mc == nullptr)
        return 0;
    return mc->readMsgBuf(len, buf);
}


INT8U mgos_mcp2515_checkReceive(MCP_CAN *mc)
{
    if (mc == nullptr)
        return CAN_NOMSG;
    return mc->checkReceive();
}


INT8U mgos_mcp2515_checkError(MCP_CAN *mc)
{
    if (mc == nullptr)
        return CAN_CTRLERROR;
    return mc->checkError();
} 


INT32U mgos_mcp2515_getCanId(MCP_CAN *mc)
{
    if (mc == nullptr)
        return 0;
    return mc->getCanId();
}
