// ============================================================
// 函数名称: sub_516d6c
// 虚拟地址: 0x516d6c
// WARP GUID: 1c462450-8413-5ce6-b2d3-31d41a2e27f9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: sub_403428, sub_50d3a0, sub_4033d0, sub_510d9c
// [被调用的父级函数]: sub_4e548c
// ============================================================

int32_t* __convention("regparm")sub_516d6c(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_8 = ebx
    int32_t esi
    int32_t var_c = esi
    int32_t* esp = &var_c
    
    if (arg2.b != 0)
        void var_1c
        esp = &var_1c
        int32_t ecx
        arg1 = sub_4033d0(ecx, arg2)
    
    arg1[0xd1].b = 0
    *(arg1 + 0x345) = 0
    arg1[0x15] = 0
    arg1[0x16] = 0
    uint32_t eax
    int32_t edx
    eax, edx = GetTickCount()
    arg1[0x77] = eax
    *(arg1 + 0x1e3) = 0
    arg1[0x79].b = 0
    sub_510d9c(arg1, edx)
    edx.b = 1
    arg1[3] = sub_50d3a0(sub_50d118+0x48, edx)
    
    if (arg2.b != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp
        esp = &esp[4]
    
    *esp
    esp[1]
    esp[2]
    return arg1
}
