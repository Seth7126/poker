// ============================================================
// 函数名称: sub_414330
// 虚拟地址: 0x414330
// WARP GUID: 0006955e-66bf-546d-b2c3-4209d566ad98
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_413a6c, sub_404248, sub_403ee0, sub_403e4c, sub_415210, sub_413600
// [被调用的父级函数]: sub_414aa0
// ============================================================

int32_t __convention("regparm")sub_414330(void* arg1, char** arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_c = arg3
    int32_t var_c = arg3
    int32_t eax_2 = sub_415210(arg3) & 0x7f
    
    if (eax_2 u<= 0xd)
        eax_2.b = lookup_table_414357[eax_2]
        
        switch (eax_2)
            case 1
                sub_413a6c(arg1, &var_c, 1)
                int32_t ecx
                ecx.b = var_c.b
                sub_403ee0(arg2, 0, ecx)
                void* eax_6 = sub_404248(arg2)
                int32_t ecx_1
                ecx_1.b = var_c.b
                return sub_413a6c(arg1, eax_6, ecx_1)
            case 2
                return sub_403e4c(arg2, "False")
            case 3
                return sub_403e4c(arg2, "True")
            case 4
                return sub_403e4c(arg2, "nil")
            case 5
                return sub_403e4c(arg2, "Null")
    
    sub_413600()
    noreturn
}
