// ============================================================
// 函数名称: sub_412bb0
// 虚拟地址: 0x412bb0
// WARP GUID: 158b895e-4d18-550d-bb26-aaecf065b225
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402980
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_412bb0(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t edi = *(arg1 + 0xc)
    int32_t edi = *(arg1 + 0xc)
    
    if (edi s>= 0 && arg3 s>= 0)
        int32_t result = *(arg1 + 8) - edi
        
        if (result s> 0)
            if (arg3 s< result)
                result = arg3
            
            sub_402980(*(arg1 + 4) + edi, arg2, result)
            *(arg1 + 0xc) += result
            return result
    
    return 0
}
