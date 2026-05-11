// ============================================================
// 函数名称: sub_4548b8
// 虚拟地址: 0x4548b8
// WARP GUID: a6362539-f1f5-5818-8213-6c2ff30859d7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_45591c, sub_455f6c, sub_4601e8, sub_4533f4
// [被调用的父级函数]: sub_453830, sub_4545b0
// ============================================================

int32_t (__convention("regparm")** __convention("regparm")sub_4548b8(int32_t* arg1, int32_t arg2, int32_t arg3))(int32_t* arg1)
{
    // 第一条实际指令: arg1[1] = 0
    arg1[1] = 0
    
    if (arg2 != 0x3d)
        void* eax = *arg1
        *(eax + 0x14) = 0xa
        *(eax + 0x18) = 0x3d
        *(eax + 0x1c) = arg2
        (**arg1)()
    
    if (arg3 != 0x1c2)
        void* eax_2 = *arg1
        *(eax_2 + 0x14) = 0x13
        *(eax_2 + 0x18) = 0x1c2
        *(eax_2 + 0x1c) = arg3
        (**arg1)()
    
    int32_t esi_1 = *arg1
    sub_4533f4(arg1, 0, 0x1c2)
    *arg1 = esi_1
    arg1[3] = 1
    sub_45591c(arg1)
    arg1[2] = 0
    arg1[5] = 0
    sub_4533f4(&arg1[0x28], 0, 0x10)
    sub_4533f4(&arg1[0x2c], 0, 0x10)
    sub_4533f4(&arg1[0x30], 0, 0x10)
    sub_4601e8(arg1)
    int32_t (__convention("regparm")** result)(int32_t* arg1) = sub_455f6c(arg1)
    arg1[4] = 0xc8
    return result
}
