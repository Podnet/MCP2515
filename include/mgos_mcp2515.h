#include "mcp_can.h"

#ifdef __cplusplus
extern "C"
{
#endif

MCP_CAN *mgos_mcp2515_create(INT8U _CS);
INT8U mgos_mcp2515_begin(MCP_CAN *mc,INT8U speedset);                                   /* init can                     */
INT8U mgos_mcp2515_init_Mask(MCP_CAN *mc,INT8U num, INT8U ext, INT32U ulData);          /* init Masks                   */
INT8U mgos_mcp2515_init_Filt(MCP_CAN *mc,INT8U num, INT8U ext, INT32U ulData);          /* init filters                 */
INT8U mgos_mcp2515_sendMsgBuf(MCP_CAN *mc,INT32U id, INT8U ext, INT8U len, INT8U *buf); /* send buf                     */
INT8U mgos_mcp2515_readMsgBuf(MCP_CAN *mc,INT8U *len, INT8U *buf);                      /* read buf                     */
INT8U mgos_mcp2515_checkReceive(MCP_CAN *mc);                                      /* if something received        */
INT8U mgos_mcp2515_checkError(MCP_CAN *mc);                                        /* if something error           */
INT32U mgos_mcp2515_getCanId(MCP_CAN *mc);

#ifdef __cplusplus
}
#endif  /* __cplusplus */