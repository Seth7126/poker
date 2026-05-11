// ============================================================
// 函数名称: sub_42d260
// 虚拟地址: 0x42d260
// WARP GUID: bd4e2490-10a4-5080-91ca-99fdbc5df66b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4318d0, sub_42d1d4, sub_42d14c
// [被调用的父级函数]: sub_4304d0
// ============================================================

int32_t* __convention("regparm")sub_42d260(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t* result
    int32_t* result
    int32_t __saved_ebp
    
    if ((*(*arg1 + 0x50))() == 0 || arg1[9] == 0)
        result = sub_42d14c(arg1, *(arg2 + 8) + 0x44)
        
        if (result != 0)
            *(*(arg2 + 8) + 4) = result
            result = sub_4318d0(result)
            *(*(arg2 + 8) + 8) = result
    else
        result = sub_42d1d4(&__saved_ebp)
    return result
}
