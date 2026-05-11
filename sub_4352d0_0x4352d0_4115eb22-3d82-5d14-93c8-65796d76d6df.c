// ============================================================
// 函数名称: sub_4352d0
// 虚拟地址: 0x4352d0
// WARP GUID: 4115eb22-3d82-5d14-93c8-65796d76d6df
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4352d0, sub_4352c8
// [被调用的父级函数]: sub_43534c, sub_4352d0
// ============================================================

int32_t __convention("regparm")sub_4352d0(void* arg1, void* arg2)
{
    // 第一条实际指令: if (arg1 != *(arg2 - 4))
    if (arg1 != *(arg2 - 4))
        void* edx_1
        edx_1.b = *(*(arg1 + 0x14) + 0x10)
        
        if (edx_1.b == *(*(*(arg2 - 4) + 0x14) + 0x10) && *(*(arg2 - 4) + 0x20) s< *(arg1 + 0x20))
            if (*(arg1 + 4) == 0)
                *(arg2 - 8) = sub_4352c8(*(arg2 - 8), *(arg1 + 0x20))
            else
                void* eax = *(arg1 + 4)
                
                if (eax != 0 && *(eax + 0x47) != 0)
                    *(arg2 - 8) = sub_4352c8(*(arg2 - 8), *(arg1 + 0x20))
    
    if (*(arg1 + 0xc) != 0)
        sub_4352d0(arg2)
    
    int32_t result = *(arg1 + 8)
    
    if (result != 0)
        result = sub_4352d0(arg2)
    
    return result
}
