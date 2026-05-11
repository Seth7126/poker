// ============================================================
// 函数名称: sub_4ce534
// 虚拟地址: 0x4ce534
// WARP GUID: ae805174-cade-5070-bc9f-1ad104f38bd4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4cf4e4, sub_4ce4c0
// [被调用的父级函数]: sub_4cf900, sub_4f1980
// ============================================================

void* __convention("regparm")sub_4ce534(void* arg1, void* arg2, char arg3)
{
    // 第一条实际指令: void* ebx = arg1
    void* ebx = arg1
    
    if (arg3 == 0)
        arg1 = *(ebx + 0x1664)
        
        if (arg2 != arg1)
            int32_t __saved_ebp
            int32_t* var_1c_1 = &__saved_ebp
            void* edx = sub_4ce4c0(arg1, arg2)
            int32_t var_c
            char var_5
            
            if ((var_c == 1 || var_c == 9) && var_5 != 5)
                int32_t* ecx
                ecx.b = var_5
                edx = sub_4cf4e4(ecx, var_c, ebx, 4)
            
            int32_t* var_1c_2 = &__saved_ebp
            sub_4ce4c0(arg2, edx)
            
            if ((var_c == 1 || var_c == 9) && var_5 != 5)
                int32_t* ecx_1
                ecx_1.b = var_5
                sub_4cf4e4(ecx_1, var_c, ebx, 2)
    
    *(ebx + 0x1664) = arg2
    char var_d
    arg1.b = var_d
    return arg1
}
