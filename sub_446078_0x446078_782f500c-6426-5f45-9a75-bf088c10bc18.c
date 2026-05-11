// ============================================================
// 函数名称: sub_446078
// 虚拟地址: 0x446078
// WARP GUID: 782f500c-6426-5f45-9a75-bf088c10bc18
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

LRESULT __convention("regparm")sub_446078(int32_t* arg1)
{
    // 第一条实际指令: LRESULT result = (*(*arg1 - 0x10))()
    LRESULT result = (*(*arg1 - 0x10))()
    
    if (*(arg1 + 0x217) == 1)
        result = data_5317d8
        
        if (*(result + 0x38) != 0)
            result = *(data_5317d8 + 0x38)
            
            if (*(result + 0x23c) != 0)
                return SendMessageA(*(*(data_5317d8 + 0x38) + 0x23c), 0x234, 0, 0)
    
    return result
}
