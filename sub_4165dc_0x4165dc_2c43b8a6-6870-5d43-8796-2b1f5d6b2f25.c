// ============================================================
// 函数名称: sub_4165dc
// 虚拟地址: 0x4165dc
// WARP GUID: 2c43b8a6-6870-5d43-8796-2b1f5d6b2f25
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030a0, sub_403428, sub_4033d0, sub_415d18
// [被调用的父级函数]: sub_4369b0
// ============================================================

int32_t* __convention("regparm")sub_4165dc(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    int32_t esi
    int32_t var_8 = esi
    int32_t* esp = &var_8
    int32_t* ecx
    
    if (arg2.b != 0)
        void var_18
        esp = &var_18
        arg1 = sub_4033d0(ecx, arg2)
    
    int32_t ecx_1
    int32_t edx
    ecx_1, edx = sub_415d18(arg1, 0, ecx)
    edx.b = 1
    arg1[0x10] = sub_4030a0(ecx_1, edx)
    
    if (arg2.b != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp
        esp = &esp[4]
    
    *esp
    esp[1]
    return arg1
}
