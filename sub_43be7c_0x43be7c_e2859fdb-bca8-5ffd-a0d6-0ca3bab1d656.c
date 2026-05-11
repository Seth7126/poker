// ============================================================
// 函数名称: sub_43be7c
// 虚拟地址: 0x43be7c
// WARP GUID: e2859fdb-bca8-5ffd-a0d6-0ca3bab1d656
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43bcb4, sub_403248, sub_43bc98
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_43be7c(uint32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* result = *(arg1 + 0x58)
    int32_t* result = *(arg1 + 0x58)
    
    if (result != 0)
        result = sub_43bcb4(result)
    
    if (arg2 != 0)
        if (sub_403248(arg2, 0x438a50) != 0)
            return sub_43bc98(arg2[0xa], arg1)
        
        result = sub_403248(arg2, &data_438654)
        
        if (result.b != 0)
            return sub_43bc98(arg2, arg1)
    
    return result
}
