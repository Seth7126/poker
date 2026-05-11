// ============================================================
// 函数名称: sub_47ba07
// 虚拟地址: 0x47ba07
// WARP GUID: cd312c85-c123-52b9-9371-2cab15cffb96
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_46ffa8, sub_4030d0, sub_46acf4, sub_404868, sub_4427a0, sub_46db80, sub_47bc55, sub_47baca
// [被调用的父级函数]: 无
// ============================================================

int32_t __stdcallsub_47ba07(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: (*0x5f000000)()
    (*0x5f000000)()
    bool c
    
    if (c)
        if (c)
            undefined
        
        jump("ng: strings:=")
    
    sub_46acf4()
    int32_t* ebx_1
    void* ebp_1
    ebx_1, ebp_1 = sub_46db80(arg3)
    sub_46acf4()
    sub_46acf4()
    int32_t eax_4 = ebx_1[0x2ad]
    
    if (eax_4 s>= 0)
        *(ebp_1 - 0xc) = eax_4 + 1
        *(ebp_1 - 8) = 0
        *(ebp_1 - 8)
        bool o = unimplemented  {imul eax, eax, 0x1038}
        
        if (not(o))
            jump(0x47bacf)
        
        noreturn sub_47baca() __tailcall
    
    sub_404868()
    sub_46acf4()
    sub_46acf4()
    sub_404868()
    sub_46acf4()
    sub_404868()
    sub_46acf4()
    sub_46acf4()
    sub_404868()
    sub_46acf4()
    sub_404868()
    sub_46acf4()
    sub_46acf4()
    sub_404868()
    sub_46acf4()
    sub_46acf4()
    sub_4030d0(ebx_1[0x288])
    sub_46acf4()
    sub_46ffa8(sub_46acf4(), *(*data_530660 + 0x24))
    sub_46acf4()
    int32_t edx_23
    edx_23.b = *(ebp_1 - 1)
    edx_23.b &= 0xfc
    int32_t* ebp_2 = sub_4427a0(ebx_1, edx_23)
    sub_46acf4()
    
    if (*(ebp_2 - 1) s<= 0)
        jump(sub_47bc55+7)
    
    return sub_47bc55(ebp_2) __tailcall
}
