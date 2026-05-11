// ============================================================
// 函数名称: sub_40ac70
// 虚拟地址: 0x40ac70
// WARP GUID: f40d0c1f-55bf-5bcb-92c9-d63a4ca89e0b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: FormatMessageA
// [内部子函数调用]: sub_403ee0
// [被调用的父级函数]: sub_494e64, sub_49611c, sub_49492a, sub_495f94, sub_494fc8, sub_4b5a84, sub_499960, sub_494f1c, sub_4998ec, sub_49630c, sub_40c7bc
// ============================================================

char** __convention("regparm")sub_40ac70(uint32_t arg1, char** arg2)
{
    // 第一条实际指令: char** Arguments = nullptr
    char** Arguments = nullptr
    void buffer
    uint32_t i
    
    for (i = FormatMessageA(FORMAT_MESSAGE_ARGUMENT_ARRAY | FORMAT_MESSAGE_FROM_SYSTEM, nullptr, arg1, 
            0, &buffer, 0x100, Arguments); i s> 0; i -= 1)
        char edx = *(&Arguments:3 + i)
        
        if (edx u>= 0x21 && edx != 0x2e)
            break
    
    sub_403ee0(arg2, &buffer, i)
    return arg2
}
