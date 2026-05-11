// ============================================================
// 函数名称: sub_40e334
// 虚拟地址: 0x40e334
// WARP GUID: 59f951db-254e-598a-a4fb-c8805f5900bc
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40e2dc, sub_40e200, sub_40e248
// [被调用的父级函数]: sub_414aa0
// ============================================================

void __fastcallsub_40e334(char* arg1, int32_t* arg2)
{
    // 第一条实际指令: char* ebx_1
    char* ebx_1
    ebx_1.b = ***arg2
    char temp0 = ebx_1.b
    ebx_1.b -= 5
    PWSTR* eax
    
    if (temp0 == 5)
        sub_40e200(eax, arg2, arg1)
        return 
    
    char temp1 = ebx_1.b
    ebx_1.b -= 5
    
    if (temp1 == 5)
        sub_40e248(eax, arg2, arg1)
        return 
    
    char temp2 = ebx_1.b
    ebx_1.b -= 1
    
    if (temp2 == 1)
        sub_40e2dc(eax, arg2)
}
