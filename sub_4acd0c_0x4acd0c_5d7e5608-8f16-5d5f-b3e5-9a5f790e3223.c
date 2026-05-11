// ============================================================
// 函数名称: sub_4acd0c
// 虚拟地址: 0x4acd0c
// WARP GUID: 5d7e5608-8f16-5d5f-b3e5-9a5f790e3223
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403428, sub_4033d0, sub_410cc0
// [被调用的父级函数]: sub_4ad4f8
// ============================================================

int32_t* __convention("regparm")sub_4acd0c(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_8 = ebx
    int32_t esi
    int32_t var_c = esi
    int32_t* esp = &var_c
    int32_t* ecx
    
    if (arg2.b != 0)
        void var_1c
        esp = &var_1c
        arg1 = sub_4033d0(ecx, arg2)
    
    sub_410cc0(arg1, 0, ecx)
    arg1[0xa].b = 0
    
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
