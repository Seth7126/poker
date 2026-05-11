// ============================================================
// 函数名称: sub_4b0f98
// 虚拟地址: 0x4b0f98
// WARP GUID: 9a8c2455-6aad-5701-bcb2-327974a97f32
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403428, sub_4a2ab4, sub_4033d0
// [被调用的父级函数]: sub_4b125c
// ============================================================

int32_t* __convention("regparm")sub_4b0f98(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_8 = ebx
    int32_t esi
    int32_t var_c = esi
    int32_t edi
    int32_t var_10 = edi
    int32_t* esp = &var_10
    
    if (arg2.b != 0)
        void var_20
        esp = &var_20
        arg1 = sub_4033d0(arg3, arg2)
    
    sub_4a2ab4(arg1, 0)
    arg1[0x1a] = arg3
    
    if (arg2.b != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp
        esp = &esp[4]
    
    *esp
    esp[1]
    esp[2]
    esp[3]
    return arg1
}
