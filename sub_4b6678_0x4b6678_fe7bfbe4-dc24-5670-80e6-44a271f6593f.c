// ============================================================
// 函数名称: sub_4b6678
// 虚拟地址: 0x4b6678
// WARP GUID: fe7bfbe4-dc24-5670-80e6-44a271f6593f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4b5c20
// [被调用的父级函数]: 无
// ============================================================

voidsub_4b6678()
{
    // 第一条实际指令: int32_t temp0 = data_532eec
    int32_t temp0 = data_532eec
    data_532eec -= 1
    
    if (temp0 u>= 1)
        return 
    
    sub_4b5c20()
    *data_5306e0 = sub_4b624c
    *data_530028 = sub_4b64a4
    *data_5307b4 = 0x4b5d24
    
    if (*data_52fef4 == 0)
        data_532ef8 = *data_530488
        *data_530488 = sub_4b6580
}
