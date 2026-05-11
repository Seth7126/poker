// ============================================================
// 函数名称: sub_44128c
// 虚拟地址: 0x44128c
// WARP GUID: 842ea7b0-786b-56ff-a6ef-7b393b397cc4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_441258
// [被调用的父级函数]: sub_441308
// ============================================================

int32_t __convention("regparm")sub_44128c(int16_t arg1, void* arg2, void* arg3)
{
    // 第一条实际指令: int16_t edi = arg2.w
    int16_t edi = arg2.w
    
    if (*(arg3 - 5) == 0)
        if (*(arg3 - 6) != 0)
            void* var_14_1 = arg3
            char eax_4
            eax_4, arg2 = sub_441258(arg1, arg2)
            
            if (eax_4 == 0)
                return neg.d((*data_5302cc)(zx.d(edi)) - *(arg3 - 0xc))
        
        if (*(arg3 - 6) == 0)
            void* var_14_3 = arg3
            
            if (sub_441258(arg1, arg2) != 0)
                return (*data_5302cc)(zx.d(edi)) - *(arg3 - 0xc)
    
    return 0
}
