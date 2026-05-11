// ============================================================
// 函数名称: sub_4091b0
// 虚拟地址: 0x4091b0
// WARP GUID: d430886c-9fce-5346-8a74-cc806fefaacc
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40423c, sub_40bdc4, sub_409524, sub_404078
// [被调用的父级函数]: sub_409294, sub_4092cc
// ============================================================

int32_t __convention("regparm")sub_4091b0(int32_t arg1, void* arg2)
{
    // 第一条实际指令: int32_t i = sub_404078(arg2)
    int32_t i = sub_404078(arg2)
    char* eax_3 = sub_40423c(arg1)
    
    for (; i s> 0; i -= 1)
        int32_t ebx
        ebx.b = *(arg2 + i - 1)
        
        if (ebx.b != 0 && sub_409524(eax_3, ebx.b) != 0)
            if (sub_40bdc4(arg2, i) != 2)
                break
            
            i -= 1
    
    return i
}
