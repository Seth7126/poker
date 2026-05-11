// ============================================================
// 函数名称: sub_431810
// 虚拟地址: 0x431810
// WARP GUID: 9bb0b948-e037-5dfc-9b20-1897fa1aaf72
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_440ee0
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_431810(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_c = ecx
    int32_t* i = arg1
    var_c.b = 0
    int32_t* esi = sub_440ee0(i)
    
    if (esi != 0)
        for (; esi != i; i = i[9])
            if (*(i + 0x47) == 0)
                goto label_431846
            
            if ((*(*i + 0x4c))(var_c).b == 0)
                goto label_431846
        
        var_c.b = 1
    
    label_431846:
    int32_t* result
    result.b = var_c.b
    return result
}
